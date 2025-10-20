#include <java/util/jar/JarFile$1.h>

#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/EnclosingMethodInfo.h>
#include <java/lang/FieldInfo.h>
#include <java/lang/InnerClassInfo.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/String.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <java/util/Enumeration.h>
#include <java/util/NoSuchElementException.h>
#include <java/util/jar/JarEntry.h>
#include <java/util/jar/JarFile.h>
#include <java/util/jar/JarVerifier.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $Enumeration = ::java::util::Enumeration;
using $NoSuchElementException = ::java::util::NoSuchElementException;
using $JarEntry = ::java::util::jar::JarEntry;
using $JarFile = ::java::util::jar::JarFile;
using $JarVerifier = ::java::util::jar::JarVerifier;
using $ZipEntry = ::java::util::zip::ZipEntry;

namespace java {
	namespace util {
		namespace jar {

$FieldInfo _JarFile$1_FieldInfo_[] = {
	{"this$0", "Ljava/util/jar/JarFile;", nullptr, $FINAL | $SYNTHETIC, $field(JarFile$1, this$0)},
	{"val$unfilteredEntries", "Ljava/util/Enumeration;", nullptr, $FINAL | $SYNTHETIC, $field(JarFile$1, val$unfilteredEntries)},
	{"entry", "Ljava/util/jar/JarEntry;", nullptr, 0, $field(JarFile$1, entry)},
	{}
};

$MethodInfo _JarFile$1_MethodInfo_[] = {
	{"<init>", "(Ljava/util/jar/JarFile;Ljava/util/Enumeration;)V", nullptr, 0, $method(static_cast<void(JarFile$1::*)($JarFile*,$Enumeration*)>(&JarFile$1::init$))},
	{"hasMoreElements", "()Z", nullptr, $PUBLIC},
	{"nextElement", "()Ljava/util/jar/JarEntry;", nullptr, $PUBLIC},
	{}
};

$EnclosingMethodInfo _JarFile$1_EnclosingMethodInfo_ = {
	"java.util.jar.JarFile",
	"entries2",
	"()Ljava/util/Enumeration;"
};

$InnerClassInfo _JarFile$1_InnerClassesInfo_[] = {
	{"java.util.jar.JarFile$1", nullptr, nullptr, 0},
	{}
};

$ClassInfo _JarFile$1_ClassInfo_ = {
	$ACC_SUPER,
	"java.util.jar.JarFile$1",
	"java.lang.Object",
	"java.util.Enumeration",
	_JarFile$1_FieldInfo_,
	_JarFile$1_MethodInfo_,
	"Ljava/lang/Object;Ljava/util/Enumeration<Ljava/util/jar/JarEntry;>;",
	&_JarFile$1_EnclosingMethodInfo_,
	_JarFile$1_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"java.util.jar.JarFile"
};

$Object* allocate$JarFile$1($Class* clazz) {
	return $of($alloc(JarFile$1));
}

void JarFile$1::init$($JarFile* this$0, $Enumeration* val$unfilteredEntries) {
	$set(this, this$0, this$0);
	$set(this, val$unfilteredEntries, val$unfilteredEntries);
}

bool JarFile$1::hasMoreElements() {
	$useLocalCurrentObjectStackCache();
	if (this->entry != nullptr) {
		return true;
	}
	while ($nc(this->val$unfilteredEntries)->hasMoreElements()) {
		$var($JarEntry, je, $cast($JarEntry, $nc(this->val$unfilteredEntries)->nextElement()));
		if ($JarVerifier::isSigningRelated($($nc(je)->getName()))) {
			continue;
		}
		$set(this, entry, je);
		return true;
	}
	return false;
}

$Object* JarFile$1::nextElement() {
	if (hasMoreElements()) {
		$var($JarEntry, je, this->entry);
		$set(this, entry, nullptr);
		return $of(this->this$0->newEntry(je));
	}
	$throwNew($NoSuchElementException);
}

JarFile$1::JarFile$1() {
}

$Class* JarFile$1::load$($String* name, bool initialize) {
	$loadClass(JarFile$1, name, initialize, &_JarFile$1_ClassInfo_, allocate$JarFile$1);
	return class$;
}

$Class* JarFile$1::class$ = nullptr;

		} // jar
	} // util
} // java