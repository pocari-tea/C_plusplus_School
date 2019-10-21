#pragma once

#define SAFE_DELETE(p) if(p) {delete p; p=NULL;}
#define SAFE_DELETE_ARRAY(p) if(p) {delete[] p; p=NULL;}
#define SAFE_RELEASE(p) if(p) {p->Release(); p=NULL;}
//½Ì±ÛÅæ ÀÚµ¿ »ý¼º
#define DECLARE_SINGLE(Type)\
private:\
static Type* m_Plnst;\
public:\
static Type* GetInst()\
{\
if (!m_Plnst)\
m_Plnst = new Type;\
return m_Plnst;\
}\
static void DestroyInst()\
{\
SAFE_DELETE(m_Plnst);\
}\
private:\
Type();\
~Type();
//½Ì±ÛÅæ ½ºÅØÆ½ º¯¼ö ÃÊ±âÈ­
#define DEFINITION_SINGLE(Type) Type*Type::m_Plnst=NULL;
#define GET_SINGLE(Type) Type::GetInst()
#define DESTROY_SINGLE(Type) Type::DestroyInst()