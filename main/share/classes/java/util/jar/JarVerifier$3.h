#ifndef _java_util_jar_JarVerifier$3_h_
#define _java_util_jar_JarVerifier$3_h_
//$ class java.util.jar.JarVerifier$3
//$ extends java.util.Enumeration

#include <java/util/Enumeration.h>

namespace java {
	namespace util {
		class Map;
	}
}
namespace java {
	namespace util {
		namespace jar {
			class JarVerifier;
		}
	}
}

namespace java {
	namespace util {
		namespace jar {

class JarVerifier$3 : public ::java::util::Enumeration {
	$class(JarVerifier$3, $NO_CLASS_INIT, ::java::util::Enumeration)
public:
	JarVerifier$3();
	void init$(::java::util::jar::JarVerifier* this$0, ::java::util::Enumeration* val$entries, ::java::util::Map* val$map);
	virtual bool hasMoreElements() override;
	virtual $Object* nextElement() override;
	::java::util::jar::JarVerifier* this$0 = nullptr;
	::java::util::Map* val$map = nullptr;
	::java::util::Enumeration* val$entries = nullptr;
	$String* name = nullptr;
};

		} // jar
	} // util
} // java

#endif // _java_util_jar_JarVerifier$3_h_