#include <java/util/jar/JarVerifier$3.h>

#include <java/util/Enumeration.h>
#include <java/util/Map.h>
#include <java/util/NoSuchElementException.h>
#include <java/util/jar/JarVerifier.h>
#include <java/util/zip/ZipEntry.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $Enumeration = ::java::util::Enumeration;
using $Map = ::java::util::Map;
using $NoSuchElementException = ::java::util::NoSuchElementException;
using $JarVerifier = ::java::util::jar::JarVerifier;
using $ZipEntry = ::java::util::zip::ZipEntry;

namespace java {
	namespace util {
		namespace jar {

$FieldInfo _JarVerifier$3_FieldInfo_[] = {
	{"this$0", "Ljava/util/jar/JarVerifier;", nullptr, $FINAL | $SYNTHETIC, $field(JarVerifier$3, this$0)},
	{"val$map", "Ljava/util/Map;", nullptr, $FINAL | $SYNTHETIC, $field(JarVerifier$3, val$map)},
	{"val$entries", "Ljava/util/Enumeration;", nullptr, $FINAL | $SYNTHETIC, $field(JarVerifier$3, val$entries)},
	{"name", "Ljava/lang/String;", nullptr, 0, $field(JarVerifier$3, name)},
	{}
};

$MethodInfo _JarVerifier$3_MethodInfo_[] = {
	{"<init>", "(Ljava/util/jar/JarVerifier;Ljava/util/Enumeration;Ljava/util/Map;)V", nullptr, 0, $method(static_cast<void(JarVerifier$3::*)($JarVerifier*,$Enumeration*,$Map*)>(&JarVerifier$3::init$))},
	{"hasMoreElements", "()Z", nullptr, $PUBLIC},
	{"nextElement", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{}
};

$EnclosingMethodInfo _JarVerifier$3_EnclosingMethodInfo_ = {
	"java.util.jar.JarVerifier",
	"unsignedEntryNames",
	"(Ljava/util/jar/JarFile;)Ljava/util/Enumeration;"
};

$InnerClassInfo _JarVerifier$3_InnerClassesInfo_[] = {
	{"java.util.jar.JarVerifier$3", nullptr, nullptr, 0},
	{}
};

$ClassInfo _JarVerifier$3_ClassInfo_ = {
	$ACC_SUPER,
	"java.util.jar.JarVerifier$3",
	"java.lang.Object",
	"java.util.Enumeration",
	_JarVerifier$3_FieldInfo_,
	_JarVerifier$3_MethodInfo_,
	"Ljava/lang/Object;Ljava/util/Enumeration<Ljava/lang/String;>;",
	&_JarVerifier$3_EnclosingMethodInfo_,
	_JarVerifier$3_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"java.util.jar.JarVerifier"
};

$Object* allocate$JarVerifier$3($Class* clazz) {
	return $of($alloc(JarVerifier$3));
}

void JarVerifier$3::init$($JarVerifier* this$0, $Enumeration* val$entries, $Map* val$map) {
	$set(this, this$0, this$0);
	$set(this, val$entries, val$entries);
	$set(this, val$map, val$map);
}

bool JarVerifier$3::hasMoreElements() {
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
		if ($nc(this->val$map)->get(value) == nullptr) {
			$set(this, name, value);
			return true;
		}
	}
	return false;
}

$Object* JarVerifier$3::nextElement() {
	if (hasMoreElements()) {
		$var($String, value, this->name);
		$set(this, name, nullptr);
		return $of(value);
	}
	$throwNew($NoSuchElementException);
}

JarVerifier$3::JarVerifier$3() {
}

$Class* JarVerifier$3::load$($String* name, bool initialize) {
	$loadClass(JarVerifier$3, name, initialize, &_JarVerifier$3_ClassInfo_, allocate$JarVerifier$3);
	return class$;
}

$Class* JarVerifier$3::class$ = nullptr;

		} // jar
	} // util
} // java