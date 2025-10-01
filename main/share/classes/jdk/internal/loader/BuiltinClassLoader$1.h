#ifndef _jdk_internal_loader_BuiltinClassLoader$1_h_
#define _jdk_internal_loader_BuiltinClassLoader$1_h_
//$ class jdk.internal.loader.BuiltinClassLoader$1
//$ extends java.util.Enumeration

#include <java/util/Enumeration.h>

namespace java {
	namespace net {
		class URL;
	}
}
namespace java {
	namespace util {
		class Iterator;
		class List;
	}
}
namespace jdk {
	namespace internal {
		namespace loader {
			class BuiltinClassLoader;
		}
	}
}

namespace jdk {
	namespace internal {
		namespace loader {

class BuiltinClassLoader$1 : public ::java::util::Enumeration {
	$class(BuiltinClassLoader$1, $NO_CLASS_INIT, ::java::util::Enumeration)
public:
	BuiltinClassLoader$1();
	void init$(::jdk::internal::loader::BuiltinClassLoader* this$0, ::java::util::List* val$checked, ::java::util::Enumeration* val$e);
	virtual bool hasMoreElements() override;
	bool hasNext();
	virtual $Object* nextElement() override;
	::jdk::internal::loader::BuiltinClassLoader* this$0 = nullptr;
	::java::util::Enumeration* val$e = nullptr;
	::java::util::List* val$checked = nullptr;
	::java::util::Iterator* iterator = nullptr;
	::java::net::URL* next = nullptr;
};

		} // loader
	} // internal
} // jdk

#endif // _jdk_internal_loader_BuiltinClassLoader$1_h_