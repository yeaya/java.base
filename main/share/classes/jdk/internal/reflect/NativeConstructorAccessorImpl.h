#ifndef _jdk_internal_reflect_NativeConstructorAccessorImpl_h_
#define _jdk_internal_reflect_NativeConstructorAccessorImpl_h_
//$ class jdk.internal.reflect.NativeConstructorAccessorImpl
//$ extends jdk.internal.reflect.ConstructorAccessorImpl

#include <java/lang/Array.h>
#include <jdk/internal/reflect/ConstructorAccessorImpl.h>

#pragma push_macro("GENERATED_OFFSET")
#undef GENERATED_OFFSET
#pragma push_macro("U")
#undef U

namespace java {
	namespace lang {
		namespace reflect {
			class Constructor;
		}
	}
}
namespace jdk {
	namespace internal {
		namespace misc {
			class Unsafe;
		}
	}
}
namespace jdk {
	namespace internal {
		namespace reflect {
			class DelegatingConstructorAccessorImpl;
		}
	}
}

namespace jdk {
	namespace internal {
		namespace reflect {

class NativeConstructorAccessorImpl : public ::jdk::internal::reflect::ConstructorAccessorImpl {
	$class(NativeConstructorAccessorImpl, 0, ::jdk::internal::reflect::ConstructorAccessorImpl)
public:
	NativeConstructorAccessorImpl();
	void init$(::java::lang::reflect::Constructor* c);
	virtual $Object* newInstance($ObjectArray* args) override;
	static $Object* newInstance0(::java::lang::reflect::Constructor* c, $ObjectArray* args);
	virtual void setParent(::jdk::internal::reflect::DelegatingConstructorAccessorImpl* parent);
	static ::jdk::internal::misc::Unsafe* U;
	static int64_t GENERATED_OFFSET;
	::java::lang::reflect::Constructor* c = nullptr;
	::jdk::internal::reflect::DelegatingConstructorAccessorImpl* parent = nullptr;
	int32_t numInvocations = 0;
	$volatile(int32_t) generated = 0;
};

		} // reflect
	} // internal
} // jdk

#pragma pop_macro("GENERATED_OFFSET")
#pragma pop_macro("U")

#endif // _jdk_internal_reflect_NativeConstructorAccessorImpl_h_