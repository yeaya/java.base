#ifndef _java_util_jar_JarFile$2_h_
#define _java_util_jar_JarFile$2_h_
//$ class java.util.jar.JarFile$2
//$ extends java.util.Enumeration

#include <java/util/Enumeration.h>

namespace java {
	namespace util {
		namespace jar {
			class JarFile;
		}
	}
}

namespace java {
	namespace util {
		namespace jar {

class JarFile$2 : public ::java::util::Enumeration {
	$class(JarFile$2, $NO_CLASS_INIT, ::java::util::Enumeration)
public:
	JarFile$2();
	void init$(::java::util::jar::JarFile* this$0, ::java::util::Enumeration* val$entries);
	virtual bool hasMoreElements() override;
	virtual $Object* nextElement() override;
	::java::util::jar::JarFile* this$0 = nullptr;
	::java::util::Enumeration* val$entries = nullptr;
	$String* name = nullptr;
};

		} // jar
	} // util
} // java

#endif // _java_util_jar_JarFile$2_h_