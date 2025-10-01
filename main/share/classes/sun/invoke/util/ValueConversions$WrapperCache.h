#ifndef _sun_invoke_util_ValueConversions$WrapperCache_h_
#define _sun_invoke_util_ValueConversions$WrapperCache_h_
//$ class sun.invoke.util.ValueConversions$WrapperCache
//$ extends java.lang.Object

#include <java/lang/Array.h>

namespace java {
	namespace lang {
		namespace invoke {
			class MethodHandle;
		}
	}
}
namespace sun {
	namespace invoke {
		namespace util {
			class Wrapper;
		}
	}
}

namespace sun {
	namespace invoke {
		namespace util {

class ValueConversions$WrapperCache : public ::java::lang::Object {
	$class(ValueConversions$WrapperCache, $NO_CLASS_INIT, ::java::lang::Object)
public:
	ValueConversions$WrapperCache();
	void init$();
	virtual ::java::lang::invoke::MethodHandle* get(::sun::invoke::util::Wrapper* w);
	virtual ::java::lang::invoke::MethodHandle* put(::sun::invoke::util::Wrapper* w, ::java::lang::invoke::MethodHandle* mh);
	$Array<::java::lang::invoke::MethodHandle>* map = nullptr;
};

		} // util
	} // invoke
} // sun

#endif // _sun_invoke_util_ValueConversions$WrapperCache_h_