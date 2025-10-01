#ifndef _java_lang_invoke_TypeDescriptor$OfMethod_h_
#define _java_lang_invoke_TypeDescriptor$OfMethod_h_
//$ interface java.lang.invoke.TypeDescriptor$OfMethod
//$ extends java.lang.invoke.TypeDescriptor

#include <java/lang/Array.h>
#include <java/lang/invoke/TypeDescriptor.h>

namespace java {
	namespace lang {
		namespace invoke {
			class TypeDescriptor$OfField;
		}
	}
}
namespace java {
	namespace util {
		class List;
	}
}

namespace java {
	namespace lang {
		namespace invoke {

class $import TypeDescriptor$OfMethod : public ::java::lang::invoke::TypeDescriptor {
	$interface(TypeDescriptor$OfMethod, $NO_CLASS_INIT, ::java::lang::invoke::TypeDescriptor)
public:
	virtual ::java::lang::invoke::TypeDescriptor$OfMethod* changeParameterType(int32_t index, ::java::lang::invoke::TypeDescriptor$OfField* paramType) {return nullptr;}
	virtual ::java::lang::invoke::TypeDescriptor$OfMethod* changeReturnType(::java::lang::invoke::TypeDescriptor$OfField* newReturn) {return nullptr;}
	virtual ::java::lang::invoke::TypeDescriptor$OfMethod* dropParameterTypes(int32_t start, int32_t end) {return nullptr;}
	virtual ::java::lang::invoke::TypeDescriptor$OfMethod* insertParameterTypes(int32_t pos, $Array<::java::lang::invoke::TypeDescriptor$OfField>* paramTypes) {return nullptr;}
	virtual $Array<::java::lang::invoke::TypeDescriptor$OfField>* parameterArray() {return nullptr;}
	virtual int32_t parameterCount() {return 0;}
	virtual ::java::util::List* parameterList() {return nullptr;}
	virtual ::java::lang::invoke::TypeDescriptor$OfField* parameterType(int32_t i) {return nullptr;}
	virtual ::java::lang::invoke::TypeDescriptor$OfField* returnType() {return nullptr;}
};

		} // invoke
	} // lang
} // java

#endif // _java_lang_invoke_TypeDescriptor$OfMethod_h_