#ifndef _java_lang_invoke_MethodType_h_
#define _java_lang_invoke_MethodType_h_
//$ class java.lang.invoke.MethodType
//$ extends java.lang.constant.Constable
//$ implements java.lang.invoke.TypeDescriptor$OfMethod,java.io.Serializable

#include <java/io/Serializable.h>
#include <java/lang/Array.h>
#include <java/lang/constant/Constable.h>
#include <java/lang/invoke/TypeDescriptor$OfMethod.h>

#pragma push_macro("MAX_JVM_ARITY")
#undef MAX_JVM_ARITY
#pragma push_macro("MAX_MH_ARITY")
#undef MAX_MH_ARITY
#pragma push_macro("MAX_MH_INVOKER_ARITY")
#undef MAX_MH_INVOKER_ARITY
#pragma push_macro("METHOD_HANDLE_ARRAY")
#undef METHOD_HANDLE_ARRAY
#pragma push_macro("NO_PTYPES")
#undef NO_PTYPES

namespace java {
	namespace io {
		class ObjectInputStream;
		class ObjectOutputStream;
		class ObjectStreamField;
	}
}
namespace java {
	namespace lang {
		class ClassLoader;
		class IndexOutOfBoundsException;
	}
}
namespace java {
	namespace lang {
		namespace constant {
			class ClassDesc;
		}
	}
}
namespace java {
	namespace lang {
		namespace invoke {
			class Invokers;
			class MethodType$ConcurrentWeakInternSet;
			class MethodTypeForm;
			class TypeDescriptor$OfField;
		}
	}
}
namespace java {
	namespace util {
		class List;
		class Optional;
	}
}

namespace java {
	namespace lang {
		namespace invoke {

class $import MethodType : public ::java::lang::constant::Constable, public ::java::lang::invoke::TypeDescriptor$OfMethod, public ::java::io::Serializable {
	$class(MethodType, 0, ::java::lang::constant::Constable, ::java::lang::invoke::TypeDescriptor$OfMethod, ::java::io::Serializable)
public:
	MethodType();
	virtual $Object* clone() override;
	virtual void finalize() override;
	void init$($Class* rtype, $ClassArray* ptypes);
	::java::lang::invoke::MethodType* appendParameterTypes($ClassArray* ptypesToInsert);
	::java::lang::invoke::MethodType* appendParameterTypes(::java::util::List* ptypesToInsert);
	::java::lang::invoke::MethodType* asCollectorType($Class* arrayType, int32_t pos, int32_t arrayLength);
	::java::lang::invoke::MethodType* asSpreaderType($Class* arrayType, int32_t pos, int32_t arrayLength);
	::java::lang::invoke::MethodType* basicType();
	static bool canConvert($Class* src, $Class* dst);
	bool canConvertParameters($ClassArray* srcTypes, $ClassArray* dstTypes);
	::java::lang::invoke::MethodType* changeParameterType(int32_t num, $Class* nptype);
	virtual ::java::lang::invoke::TypeDescriptor$OfMethod* changeParameterType(int32_t num, ::java::lang::invoke::TypeDescriptor$OfField* nptype) override;
	::java::lang::invoke::MethodType* changeReturnType($Class* nrtype);
	virtual ::java::lang::invoke::TypeDescriptor$OfMethod* changeReturnType(::java::lang::invoke::TypeDescriptor$OfField* nrtype) override;
	static int32_t checkPtypes($ClassArray* ptypes);
	static void checkSlotCount(int32_t count);
	virtual ::java::util::Optional* describeConstable() override;
	virtual $String* descriptorString() override;
	virtual ::java::lang::invoke::TypeDescriptor$OfMethod* dropParameterTypes(int32_t start, int32_t end) override;
	bool effectivelyIdenticalParameters(int32_t skipPos, ::java::util::List* fullList);
	virtual bool equals(Object$* x) override;
	bool equals(::java::lang::invoke::MethodType* that);
	::java::lang::invoke::MethodType* erase();
	bool explicitCastEquivalentToAsType(::java::lang::invoke::MethodType* newType);
	static bool explicitCastEquivalentToAsType($Class* src, $Class* dst);
	::java::lang::invoke::MethodTypeForm* form();
	static ::java::lang::invoke::MethodType* fromDescriptor($String* descriptor, ::java::lang::ClassLoader* loader);
	static ::java::lang::invoke::MethodType* fromMethodDescriptorString($String* descriptor, ::java::lang::ClassLoader* loader);
	::java::lang::invoke::MethodType* generic();
	static ::java::lang::invoke::MethodType* genericMethodType(int32_t objectArgCount, bool finalArray);
	static ::java::lang::invoke::MethodType* genericMethodType(int32_t objectArgCount);
	bool hasPrimitives();
	bool hasWrappers();
	virtual int32_t hashCode() override;
	::java::lang::invoke::MethodType* insertParameterTypes(int32_t num, $ClassArray* ptypesToInsert);
	::java::lang::invoke::MethodType* insertParameterTypes(int32_t num, ::java::util::List* ptypesToInsert);
	virtual ::java::lang::invoke::TypeDescriptor$OfMethod* insertParameterTypes(int32_t num, $Array<::java::lang::invoke::TypeDescriptor$OfField>* ptypesToInsert) override;
	::java::lang::invoke::MethodType* invokerType();
	::java::lang::invoke::Invokers* invokers();
	bool isConvertibleTo(::java::lang::invoke::MethodType* newType);
	bool isGeneric();
	bool isViewableAs(::java::lang::invoke::MethodType* newType, bool keepInterfaces);
	static ::java::lang::constant::ClassDesc* lambda$describeConstable$0($Class* p);
	static $Array<::java::lang::constant::ClassDesc>* lambda$describeConstable$1(int32_t x$0);
	$Class* lastParameterType();
	$Class* leadingReferenceParameter();
	static $ClassArray* listToArray(::java::util::List* ptypes);
	static ::java::lang::invoke::MethodType* makeImpl($Class* rtype, $ClassArray* ptypes, bool trusted);
	static ::java::lang::invoke::MethodType* methodType($Class* rtype, $ClassArray* ptypes);
	static ::java::lang::invoke::MethodType* methodType($Class* rtype, ::java::util::List* ptypes);
	static ::java::lang::invoke::MethodType* methodType($Class* rtype, $Class* ptype0, $ClassArray* ptypes);
	static ::java::lang::invoke::MethodType* methodType($Class* rtype);
	static ::java::lang::invoke::MethodType* methodType($Class* rtype, $Class* ptype0);
	static ::java::lang::invoke::MethodType* methodType($Class* rtype, ::java::lang::invoke::MethodType* ptypes);
	static ::java::lang::IndexOutOfBoundsException* newIndexOutOfBoundsException(Object$* num);
	virtual $Array<::java::lang::invoke::TypeDescriptor$OfField>* parameterArray() override;
	virtual int32_t parameterCount() override;
	virtual ::java::util::List* parameterList() override;
	int32_t parameterSlotCount();
	virtual ::java::lang::invoke::TypeDescriptor$OfField* parameterType(int32_t num) override;
	$ClassArray* ptypes();
	void readObject(::java::io::ObjectInputStream* s);
	$Object* readResolve();
	::java::lang::invoke::MethodType* replaceParameterTypes(int32_t start, int32_t end, $ClassArray* ptypesToInsert);
	virtual ::java::lang::invoke::TypeDescriptor$OfField* returnType() override;
	$Class* rtype();
	void setForm(::java::lang::invoke::MethodTypeForm* f);
	static $String* toFieldDescriptorString($Class* cls);
	$String* toMethodDescriptorString();
	virtual $String* toString() override;
	::java::lang::invoke::MethodType* unwrap();
	static ::java::lang::invoke::MethodType* unwrapWithNoPrims(::java::lang::invoke::MethodType* wt);
	::java::lang::invoke::MethodType* wrap();
	static ::java::lang::invoke::MethodType* wrapWithPrims(::java::lang::invoke::MethodType* pt);
	void writeObject(::java::io::ObjectOutputStream* s);
	static bool $assertionsDisabled;
	static const int64_t serialVersionUID = (int64_t)292;
	$Class* rtype$ = nullptr;
	$ClassArray* ptypes$ = nullptr;
	::java::lang::invoke::MethodTypeForm* form$ = nullptr;
	$Object* wrapAlt = nullptr;
	::java::lang::invoke::Invokers* invokers$ = nullptr;
	$String* methodDescriptor = nullptr;
	static const int32_t MAX_JVM_ARITY = 255;
	static const int32_t MAX_MH_ARITY = 254; // MAX_JVM_ARITY - 1
	static const int32_t MAX_MH_INVOKER_ARITY = 253; // MAX_MH_ARITY - 1
	static ::java::lang::invoke::MethodType$ConcurrentWeakInternSet* internTable;
	static $ClassArray* NO_PTYPES;
	static $Array<::java::lang::invoke::MethodType>* objectOnlyTypes;
	static $ClassArray* METHOD_HANDLE_ARRAY;
	static $Array<::java::io::ObjectStreamField>* serialPersistentFields;
};

		} // invoke
	} // lang
} // java

#pragma pop_macro("MAX_JVM_ARITY")
#pragma pop_macro("MAX_MH_ARITY")
#pragma pop_macro("MAX_MH_INVOKER_ARITY")
#pragma pop_macro("METHOD_HANDLE_ARRAY")
#pragma pop_macro("NO_PTYPES")

#endif // _java_lang_invoke_MethodType_h_