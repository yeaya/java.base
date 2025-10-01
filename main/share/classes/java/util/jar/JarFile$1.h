#ifndef _java_util_jar_JarFile$1_h_
#define _java_util_jar_JarFile$1_h_
//$ class java.util.jar.JarFile$1
//$ extends java.util.Enumeration

#include <java/util/Enumeration.h>

namespace java {
	namespace util {
		namespace jar {
			class JarEntry;
			class JarFile;
		}
	}
}

namespace java {
	namespace util {
		namespace jar {

class JarFile$1 : public ::java::util::Enumeration {
	$class(JarFile$1, $NO_CLASS_INIT, ::java::util::Enumeration)
public:
	JarFile$1();
	void init$(::java::util::jar::JarFile* this$0, ::java::util::Enumeration* val$unfilteredEntries);
	virtual bool hasMoreElements() override;
	virtual $Object* nextElement() override;
	::java::util::jar::JarFile* this$0 = nullptr;
	::java::util::Enumeration* val$unfilteredEntries = nullptr;
	::java::util::jar::JarEntry* entry = nullptr;
};

		} // jar
	} // util
} // java

#endif // _java_util_jar_JarFile$1_h_