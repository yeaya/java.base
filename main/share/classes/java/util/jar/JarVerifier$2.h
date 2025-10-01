#ifndef _java_util_jar_JarVerifier$2_h_
#define _java_util_jar_JarVerifier$2_h_
//$ class java.util.jar.JarVerifier$2
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
			class JarEntry;
			class JarFile;
			class JarVerifier;
		}
	}
}

namespace java {
	namespace util {
		namespace jar {

class JarVerifier$2 : public ::java::util::Enumeration {
	$class(JarVerifier$2, $NO_CLASS_INIT, ::java::util::Enumeration)
public:
	JarVerifier$2();
	void init$(::java::util::jar::JarVerifier* this$0, ::java::util::Enumeration* val$enum_, ::java::util::jar::JarFile* val$jar, ::java::util::Map* val$map);
	virtual bool hasMoreElements() override;
	virtual $Object* nextElement() override;
	::java::util::jar::JarVerifier* this$0 = nullptr;
	::java::util::Map* val$map = nullptr;
	::java::util::jar::JarFile* val$jar = nullptr;
	::java::util::Enumeration* val$enum_ = nullptr;
	::java::util::Enumeration* signers = nullptr;
	::java::util::jar::JarEntry* entry = nullptr;
};

		} // jar
	} // util
} // java

#endif // _java_util_jar_JarVerifier$2_h_