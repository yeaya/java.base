#ifndef _jdk_internal_loader_AbstractClassLoaderValue_h_
#define _jdk_internal_loader_AbstractClassLoaderValue_h_
//$ class jdk.internal.loader.AbstractClassLoaderValue
//$ extends java.lang.Object

#include <java/lang/Object.h>

#pragma push_macro("JLA")
#undef JLA

namespace java {
	namespace lang {
		class ClassLoader;
	}
}
namespace java {
	namespace util {
		namespace concurrent {
			class ConcurrentHashMap;
		}
	}
}
namespace java {
	namespace util {
		namespace function {
			class BiFunction;
		}
	}
}
namespace jdk {
	namespace internal {
		namespace access {
			class JavaLangAccess;
		}
	}
}
namespace jdk {
	namespace internal {
		namespace loader {
			class AbstractClassLoaderValue$Sub;
		}
	}
}

namespace jdk {
	namespace internal {
		namespace loader {

class $export AbstractClassLoaderValue : public ::java::lang::Object {
	$class(AbstractClassLoaderValue, $PRELOAD, ::java::lang::Object)
public:
	AbstractClassLoaderValue();
	void init$();
	virtual $Object* computeIfAbsent(::java::lang::ClassLoader* cl, ::java::util::function::BiFunction* mappingFunction);
	$Object* extractValue(Object$* memoizerOrValue);
	virtual $Object* get(::java::lang::ClassLoader* cl);
	virtual bool isEqualOrDescendantOf(::jdk::internal::loader::AbstractClassLoaderValue* clv) {return false;}
	virtual $Object* key() {return nullptr;}
	static ::java::util::concurrent::ConcurrentHashMap* map(::java::lang::ClassLoader* cl);
	virtual $Object* putIfAbsent(::java::lang::ClassLoader* cl, Object$* v);
	virtual bool remove(::java::lang::ClassLoader* cl, Object$* v);
	virtual void removeAll(::java::lang::ClassLoader* cl);
	virtual ::jdk::internal::loader::AbstractClassLoaderValue$Sub* sub(Object$* key);
	static ::jdk::internal::access::JavaLangAccess* JLA;
};

		} // loader
	} // internal
} // jdk

#pragma pop_macro("JLA")

#endif // _jdk_internal_loader_AbstractClassLoaderValue_h_