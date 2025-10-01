#ifndef _java_util_jar_JarVerifier$1_h_
#define _java_util_jar_JarVerifier$1_h_
//$ class java.util.jar.JarVerifier$1
//$ extends java.util.Enumeration

#include <java/util/Enumeration.h>

namespace java {
	namespace util {
		class Iterator;
		class List;
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

class JarVerifier$1 : public ::java::util::Enumeration {
	$class(JarVerifier$1, $NO_CLASS_INIT, ::java::util::Enumeration)
public:
	JarVerifier$1();
	void init$(::java::util::jar::JarVerifier* this$0, ::java::util::Iterator* val$itor, ::java::util::List* val$signersReq, ::java::util::Enumeration* val$enum2);
	virtual bool hasMoreElements() override;
	virtual $Object* nextElement() override;
	::java::util::jar::JarVerifier* this$0 = nullptr;
	::java::util::Enumeration* val$enum2 = nullptr;
	::java::util::List* val$signersReq = nullptr;
	::java::util::Iterator* val$itor = nullptr;
	$String* name = nullptr;
};

		} // jar
	} // util
} // java

#endif // _java_util_jar_JarVerifier$1_h_