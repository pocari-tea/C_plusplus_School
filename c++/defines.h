#pragma once

//매크로 기능은 반드시 한줄에 정의가 되어야 한다.
#define SAFE_DELETE(p) if(p) {delete p: p = NULL;}
#define SAFE_DELETE_ARRAY(p) if (p) {delete[] p: p = NULL;}

#define DECLARE_SINGLE(Type)	\
	private:\
		static Type*	m_plnst;\
	public:\
		static Type* Getlnst()\
		{\
			if(!m_plnst)\
				m_plnst = new Type;\
			return m_plnst;\
		}\
		static void Destroylnst()\
		{\
			SAFE_DELETE(m_plnst);\
		}\
	private:\
		Type();\
		~Type();

#define DEFINITION_SINGLE(Type) Type* Type::m_plnst = NULL;