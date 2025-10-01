#ifndef _jdk_internal_loader_URLClassPath_h_
#define _jdk_internal_loader_URLClassPath_h_
//$ class jdk.internal.loader.URLClassPath
//$ extends java.lang.Object

#include <java/lang/Array.h>

#pragma push_macro("JNUA")
#undef JNUA
#pragma push_macro("DISABLE_CP_URL_CHECK")
#undef DISABLE_CP_URL_CHECK
#pragma push_macro("USER_AGENT_JAVA_VERSION")
#undef USER_AGENT_JAVA_VERSION
#pragma push_macro("DISABLE_ACC_CHECKING")
#undef DISABLE_ACC_CHECKING
#pragma push_macro("DISABLE_JAR_CHECKING")
#undef DISABLE_JAR_CHECKING
#pragma push_macro("DEBUG_CP_URL_CHECK")
#undef DEBUG_CP_URL_CHECK
#pragma push_macro("JAVA_VERSION")
#undef JAVA_VERSION
#pragma push_macro("DEBUG")
#undef DEBUG

namespace java {
	namespace net {
		class URL;
		class URLStreamHandler;
		class URLStreamHandlerFactory;
	}
}
namespace java {
	namespace security {
		class AccessControlContext;
	}
}
namespace java {
	namespace util {
		class ArrayDeque;
		class ArrayList;
		class Enumeration;
		class HashMap;
		class List;
	}
}
namespace jdk {
	namespace internal {
		namespace access {
			class JavaNetURLAccess;
		}
	}
}
namespace jdk {
	namespace internal {
		namespace loader {
			class Resource;
			class URLClassPath$Loader;
		}
	}
}

namespace jdk {
	namespace internal {
		namespace loader {

class $export URLClassPath : public ::java::lang::Object {
	$class(URLClassPath, $PRELOAD, ::java::lang::Object)
public:
	URLClassPath();
	void init$($Array<::java::net::URL>* urls, ::java::net::URLStreamHandlerFactory* factory, ::java::security::AccessControlContext* acc);
	void init$($Array<::java::net::URL>* urls, ::java::security::AccessControlContext* acc);
	void init$($String* cp, bool skipEmptyElements);
	virtual void addFile($String* s);
	virtual void addURL(::java::net::URL* url);
	static void check(::java::net::URL* url);
	static ::java::net::URL* checkURL(::java::net::URL* url);
	virtual ::java::util::List* closeLoaders();
	virtual ::java::net::URL* findResource($String* name, bool check);
	virtual ::java::util::Enumeration* findResources($String* name, bool check);
	::jdk::internal::loader::URLClassPath$Loader* getLoader(int32_t index);
	::jdk::internal::loader::URLClassPath$Loader* getLoader(::java::net::URL* url);
	virtual ::jdk::internal::loader::Resource* getResource($String* name, bool check);
	virtual ::jdk::internal::loader::Resource* getResource($String* name);
	virtual ::java::util::Enumeration* getResources($String* name, bool check);
	virtual ::java::util::Enumeration* getResources($String* name);
	virtual $Array<::java::net::URL>* getURLs();
	static bool isDefaultJarHandler(::java::net::URL* u);
	void push($Array<::java::net::URL>* urls);
	static ::java::net::URL* toFileURL($String* s);
	static $String* USER_AGENT_JAVA_VERSION;
	static $String* JAVA_VERSION;
	static bool DEBUG;
	static bool DISABLE_JAR_CHECKING;
	static bool DISABLE_ACC_CHECKING;
	static bool DISABLE_CP_URL_CHECK;
	static bool DEBUG_CP_URL_CHECK;
	::java::util::ArrayList* path = nullptr;
	::java::util::ArrayDeque* unopenedUrls = nullptr;
	::java::util::ArrayList* loaders = nullptr;
	::java::util::HashMap* lmap = nullptr;
	::java::net::URLStreamHandler* jarHandler = nullptr;
	bool closed = false;
	::java::security::AccessControlContext* acc = nullptr;
	static ::jdk::internal::access::JavaNetURLAccess* JNUA;
};

		} // loader
	} // internal
} // jdk

#pragma pop_macro("JNUA")
#pragma pop_macro("DISABLE_CP_URL_CHECK")
#pragma pop_macro("USER_AGENT_JAVA_VERSION")
#pragma pop_macro("DISABLE_ACC_CHECKING")
#pragma pop_macro("DISABLE_JAR_CHECKING")
#pragma pop_macro("DEBUG_CP_URL_CHECK")
#pragma pop_macro("JAVA_VERSION")
#pragma pop_macro("DEBUG")

#endif // _jdk_internal_loader_URLClassPath_h_