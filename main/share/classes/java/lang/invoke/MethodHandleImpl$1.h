#ifndef _java_lang_invoke_MethodHandleImpl$1_h_
#define _java_lang_invoke_MethodHandleImpl$1_h_
//$ class java.lang.invoke.MethodHandleImpl$1
//$ extends jdk.internal.access.JavaLangInvokeAccess

#include <java/lang/Array.h>
#include <jdk/internal/access/JavaLangInvokeAccess.h>

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

namespace java {
	namespace lang {
		namespace invoke {

class MethodHandleImpl$1 : public ::jdk::internal::access::JavaLangInvokeAccess {
	$class(MethodHandleImpl$1, $NO_CLASS_INIT, ::jdk::internal::access::JavaLangInvokeAccess)
public:
	MethodHandleImpl$1();
	void init$();
	virtual ::java::lang::invoke::VarHandle* collectCoordinates(::java::lang::invoke::VarHandle* target, int32_t pos, ::java::lang::invoke::MethodHandle* filter) override;
	virtual ::java::lang::invoke::VarHandle* dropCoordinates(::java::lang::invoke::VarHandle* target, int32_t pos, $ClassArray* valueTypes) override;
	virtual void ensureCustomized(::java::lang::invoke::MethodHandle* mh) override;
	virtual ::java::lang::invoke::VarHandle* filterCoordinates(::java::lang::invoke::VarHandle* target, int32_t pos, $Array<::java::lang::invoke::MethodHandle>* filters) override;
	virtual ::java::lang::invoke::VarHandle* filterValue(::java::lang::invoke::VarHandle* target, ::java::lang::invoke::MethodHandle* filterToTarget, ::java::lang::invoke::MethodHandle* filterFromTarget) override;
	virtual ::java::util::Map* generateHolderClasses(::java::util::stream::Stream* traces) override;
	virtual $Class* getDeclaringClass(Object$* mname) override;
	virtual $String* getMethodDescriptor(Object$* mname) override;
	virtual ::java::lang::invoke::MethodType* getMethodType(Object$* mname) override;
	virtual $String* getName(Object$* mname) override;
	virtual ::java::lang::invoke::VarHandle* insertCoordinates(::java::lang::invoke::VarHandle* target, int32_t pos, $ObjectArray* values) override;
	virtual bool isNative(Object$* mname) override;
	virtual ::java::lang::invoke::VarHandle* memoryAccessVarHandle($Class* carrier, bool skipAlignmentMaskCheck, int64_t alignmentMask, ::java::nio::ByteOrder* order) override;
	virtual ::java::lang::invoke::MethodHandle* nativeMethodHandle(::jdk::internal::invoke::NativeEntryPoint* nep, ::java::lang::invoke::MethodHandle* fallback) override;
	virtual $Object* newMemberName() override;
	virtual ::java::lang::invoke::VarHandle* permuteCoordinates(::java::lang::invoke::VarHandle* target, ::java::util::List* newCoordinates, $ints* reorder) override;
};

		} // invoke
	} // lang
} // java

#endif // _java_lang_invoke_MethodHandleImpl$1_h_