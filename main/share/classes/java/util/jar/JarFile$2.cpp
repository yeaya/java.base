#include <java/util/jar/JarFile$2.h>

#include <java/util/Enumeration.h>
#include <java/util/NoSuchElementException.h>
#include <java/util/jar/JarFile.h>
#include <java/util/jar/JarVerifier.h>
#include <java/util/zip/ZipEntry.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $Enumeration = ::java::util::Enumeration;
using $NoSuchElementException = ::java::util::NoSuchElementException;
using $JarFile = ::java::util::jar::JarFile;
using $JarVerifier = ::java::util::jar::JarVerifier;
using $ZipEntry = ::java::util::zip::ZipEntry;

namespace java {
	namespace util {
		namespace jar {

$FieldInfo _JarFile$2_FieldInfo_[] = {
	{"this$0", "Ljava/util/jar/JarFile;", nullptr, $FINAL | $SYNTHETIC, $field(JarFile$2, this$0)},
	{"val$entries", "Ljava/util/Enumeration;", nullptr, $FINAL | $SYNTHETIC, $field(JarFile$2, val$entries)},
	{"name", "Ljava/lang/String;", nullptr, 0, $field(JarFile$2, name)},
	{}
};

$MethodInfo _JarFile$2_MethodInfo_[] = {
	{"<init>", "(Ljava/util/jar/JarFile;Ljava/util/Enumeration;)V", nullptr, 0, $method(JarFile$2, init$, void, $JarFile*, $Enumeration*)},
	{"hasMoreElements", "()Z", nullptr, $PUBLIC, $virtualMethod(JarFile$2, hasMoreElements, bool)},
	{"nextElement", "()Ljava/lang/String;", nullptr, $PUBLIC, $virtualMethod(JarFile$2, nextElement, $Object*)},
	{}
};

$EnclosingMethodInfo _JarFile$2_EnclosingMethodInfo_ = {
	"java.util.jar.JarFile",
	"unsignedEntryNames",
	"()Ljava/util/Enumeration;"
};

$InnerClassInfo _JarFile$2_InnerClassesInfo_[] = {
	{"java.util.jar.JarFile$2", nullptr, nullptr, 0},
	{}
};

$ClassInfo _JarFile$2_ClassInfo_ = {
	$ACC_SUPER,
	"java.util.jar.JarFile$2",
	"java.lang.Object",
	"java.util.Enumeration",
	_JarFile$2_FieldInfo_,
	_JarFile$2_MethodInfo_,
	"Ljava/lang/Object;Ljava/util/Enumeration<Ljava/lang/String;>;",
	&_JarFile$2_EnclosingMethodInfo_,
	_JarFile$2_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"java.util.jar.JarFile"
};

$Object* allocate$JarFile$2($Class* clazz) {
	return $of($alloc(JarFile$2));
}

void JarFile$2::init$($JarFile* this$0, $Enumeration* val$entries) {
	$set(this, this$0, this$0);
	$set(this, val$entries, val$entries);
}

bool JarFile$2::hasMoreElements() {
	$useLocalCurrentObjectStackCache();
	if (this->name != nullptr) {
		return true;
	}
	while ($nc(this->val$entries)->hasMoreElements()) {
		$var($String, value, nullptr);
		$var($ZipEntry, e, $cast($ZipEntry, $nc(this->val$entries)->nextElement()));
		$assign(value, $nc(e)->getName());
		bool var$0 = e->isDirectory();
		if (var$0 || $JarVerifier::isSigningRelated(value)) {
			continue;
		}
		$set(this, name, value);
		return true;
	}
	return false;
}

$Object* JarFile$2::nextElement() {
	if (hasMoreElements()) {
		$var($String, value, this->name);
		$set(this, name, nullptr);
		return $of(value);
	}
	$throwNew($NoSuchElementException);
}

JarFile$2::JarFile$2() {
}

$Class* JarFile$2::load$($String* name, bool initialize) {
	$loadClass(JarFile$2, name, initialize, &_JarFile$2_ClassInfo_, allocate$JarFile$2);
	return class$;
}

$Class* JarFile$2::class$ = nullptr;

		} // jar
	} // util
} // java