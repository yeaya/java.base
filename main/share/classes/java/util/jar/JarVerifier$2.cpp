#include <java/util/jar/JarVerifier$2.h>

#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/EnclosingMethodInfo.h>
#include <java/lang/FieldInfo.h>
#include <java/lang/InnerClassInfo.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/String.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <java/util/Collection.h>
#include <java/util/Collections.h>
#include <java/util/Enumeration.h>
#include <java/util/Map.h>
#include <java/util/NoSuchElementException.h>
#include <java/util/Set.h>
#include <java/util/jar/JarEntry.h>
#include <java/util/jar/JarFile.h>
#include <java/util/jar/JarVerifier.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $Collection = ::java::util::Collection;
using $Collections = ::java::util::Collections;
using $Enumeration = ::java::util::Enumeration;
using $Map = ::java::util::Map;
using $NoSuchElementException = ::java::util::NoSuchElementException;
using $Set = ::java::util::Set;
using $JarEntry = ::java::util::jar::JarEntry;
using $JarFile = ::java::util::jar::JarFile;
using $JarVerifier = ::java::util::jar::JarVerifier;
using $ZipEntry = ::java::util::zip::ZipEntry;

namespace java {
	namespace util {
		namespace jar {

$FieldInfo _JarVerifier$2_FieldInfo_[] = {
	{"this$0", "Ljava/util/jar/JarVerifier;", nullptr, $FINAL | $SYNTHETIC, $field(JarVerifier$2, this$0)},
	{"val$map", "Ljava/util/Map;", nullptr, $FINAL | $SYNTHETIC, $field(JarVerifier$2, val$map)},
	{"val$jar", "Ljava/util/jar/JarFile;", nullptr, $FINAL | $SYNTHETIC, $field(JarVerifier$2, val$jar)},
	{"val$enum_", "Ljava/util/Enumeration;", nullptr, $FINAL | $SYNTHETIC, $field(JarVerifier$2, val$enum_)},
	{"signers", "Ljava/util/Enumeration;", "Ljava/util/Enumeration<Ljava/lang/String;>;", 0, $field(JarVerifier$2, signers)},
	{"entry", "Ljava/util/jar/JarEntry;", nullptr, 0, $field(JarVerifier$2, entry)},
	{}
};

$MethodInfo _JarVerifier$2_MethodInfo_[] = {
	{"<init>", "(Ljava/util/jar/JarVerifier;Ljava/util/Enumeration;Ljava/util/jar/JarFile;Ljava/util/Map;)V", nullptr, 0, $method(static_cast<void(JarVerifier$2::*)($JarVerifier*,$Enumeration*,$JarFile*,$Map*)>(&JarVerifier$2::init$))},
	{"hasMoreElements", "()Z", nullptr, $PUBLIC},
	{"nextElement", "()Ljava/util/jar/JarEntry;", nullptr, $PUBLIC},
	{}
};

$EnclosingMethodInfo _JarVerifier$2_EnclosingMethodInfo_ = {
	"java.util.jar.JarVerifier",
	"entries2",
	"(Ljava/util/jar/JarFile;Ljava/util/Enumeration;)Ljava/util/Enumeration;"
};

$InnerClassInfo _JarVerifier$2_InnerClassesInfo_[] = {
	{"java.util.jar.JarVerifier$2", nullptr, nullptr, 0},
	{}
};

$ClassInfo _JarVerifier$2_ClassInfo_ = {
	$ACC_SUPER,
	"java.util.jar.JarVerifier$2",
	"java.lang.Object",
	"java.util.Enumeration",
	_JarVerifier$2_FieldInfo_,
	_JarVerifier$2_MethodInfo_,
	"Ljava/lang/Object;Ljava/util/Enumeration<Ljava/util/jar/JarEntry;>;",
	&_JarVerifier$2_EnclosingMethodInfo_,
	_JarVerifier$2_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"java.util.jar.JarVerifier"
};

$Object* allocate$JarVerifier$2($Class* clazz) {
	return $of($alloc(JarVerifier$2));
}

void JarVerifier$2::init$($JarVerifier* this$0, $Enumeration* val$enum_, $JarFile* val$jar, $Map* val$map) {
	$set(this, this$0, this$0);
	$set(this, val$enum_, val$enum_);
	$set(this, val$jar, val$jar);
	$set(this, val$map, val$map);
	$set(this, signers, nullptr);
}

bool JarVerifier$2::hasMoreElements() {
	$useLocalCurrentObjectStackCache();
	if (this->entry != nullptr) {
		return true;
	}
	while ($nc(this->val$enum_)->hasMoreElements()) {
		$var($JarEntry, je, $cast($JarEntry, $nc(this->val$enum_)->nextElement()));
		if ($JarVerifier::isSigningRelated($($nc(je)->getName()))) {
			continue;
		}
		$set(this, entry, $nc(this->val$jar)->newEntry(je));
		return true;
	}
	if (this->signers == nullptr) {
		$set(this, signers, $Collections::enumeration($($nc(this->val$map)->keySet())));
	}
	while ($nc(this->signers)->hasMoreElements()) {
		$var($String, name, $cast($String, $nc(this->signers)->nextElement()));
		$set(this, entry, $nc(this->val$jar)->newEntry(name));
		return true;
	}
	return false;
}

$Object* JarVerifier$2::nextElement() {
	$useLocalCurrentObjectStackCache();
	if (hasMoreElements()) {
		$var($JarEntry, je, this->entry);
		$nc(this->val$map)->remove($($nc(je)->getName()));
		$set(this, entry, nullptr);
		return $of(je);
	}
	$throwNew($NoSuchElementException);
}

JarVerifier$2::JarVerifier$2() {
}

$Class* JarVerifier$2::load$($String* name, bool initialize) {
	$loadClass(JarVerifier$2, name, initialize, &_JarVerifier$2_ClassInfo_, allocate$JarVerifier$2);
	return class$;
}

$Class* JarVerifier$2::class$ = nullptr;

		} // jar
	} // util
} // java