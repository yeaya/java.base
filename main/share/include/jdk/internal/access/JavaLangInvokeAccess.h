#ifndef _jdk_internal_access_JavaLangInvokeAccess_h_
#define _jdk_internal_access_JavaLangInvokeAccess_h_
//$ interface jdk.internal.access.JavaLangInvokeAccess
//$ extends java.lang.Object

#include <java/lang/Array.h>

namespace java {
	namespace lang {
		namespace invoke {
			class MethodHandle;
			class MethodType;
			class VarHandle;
		}
	}
}
namespace java {
	namespace nio {
		class ByteOrder;
	}
}
namespace java {
	namespace util {
		class List;
		class Map;
	}
}
namespace java {
	namespace util {
		namespace stream {
			class Stream;
		}
	}
}
namespace jdk {
	namespace internal {
		namespace invoke {
			class NativeEntryPoint;
		}
	}
}

namespace jdk {
	namespace internal {
		namespace access {

class $import JavaLangInvokeAccess : public ::java::lang::Object {
	$interface(JavaLangInvokeAccess, $NO_CLASS_INIT, ::java::lang::Object)
public:
	virtual ::java::lang::invoke::VarHandle* collectCoordinates(::java::lang::invoke::VarHandle* target, int32_t pos, ::java::lang::invoke::MethodHandle* filter) {return nullptr;}
	virtual ::java::lang::invoke::VarHandle* dropCoordinates(::java::lang::invoke::VarHandle* target, int32_t pos, $ClassArray* valueTypes) {return nullptr;}
	virtual void ensureCustomized(::java::lang::invoke::MethodHandle* mh) {}
	virtual ::java::lang::invoke::VarHandle* filterCoordinates(::java::lang::invoke::VarHandle* target, int32_t pos, $Array<::java::lang::invoke::MethodHandle>* filters) {return nullptr;}
	virtual ::java::lang::invoke::VarHandle* filterValue(::java::lang::invoke::VarHandle* target, ::java::lang::invoke::MethodHandle* filterToTarget, ::java::lang::invoke::MethodHandle* filterFromTarget) {return nullptr;}
	virtual ::java::util::Map* generateHolderClasses(::java::util::stream::Stream* traces) {return nullptr;}
	virtual $Class* getDeclaringClass(Object$* mname) {return nullptr;}
	virtual $String* getMethodDescriptor(Object$* mname) {return nullptr;}
	virtual ::java::lang::invoke::MethodType* getMethodType(Object$* mname) {return nullptr;}
	virtual $String* getName(Object$* mname) {return nullptr;}
	virtual ::java::lang::invoke::VarHandle* insertCoordinates(::java::lang::invoke::VarHandle* target, int32_t pos, $ObjectArray* values) {return nullptr;}
	virtual bool isNative(Object$* mname) {return false;}
	virtual ::java::lang::invoke::VarHandle* memoryAccessVarHandle($Class* carrier, bool skipAlignmentMaskCheck, int64_t alignmentMask, ::java::nio::ByteOrder* order) {return nullptr;}
	virtual ::java::lang::invoke::MethodHandle* nativeMethodHandle(::jdk::internal::invoke::NativeEntryPoint* nep, ::java::lang::invoke::MethodHandle* fallback) {return nullptr;}
	virtual $Object* newMemberName() {return nullptr;}
	virtual ::java::lang::invoke::VarHandle* permuteCoordinates(::java::lang::invoke::VarHandle* target, ::java::util::List* newCoordinates, $ints* reorder) {return nullptr;}
};

		} // access
	} // internal
} // jdk

#endif // _jdk_internal_access_JavaLangInvokeAccess_h_