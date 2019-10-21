#pragma once

//��ũ�� ����� �ݵ�� ���ٿ� ���ǰ� �Ǿ�� �Ѵ�.
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