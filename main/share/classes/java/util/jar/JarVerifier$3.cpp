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

void JarVerifier$3::init$($JarVerifier* this$0, $Enumeration* val$entries, $Map* val$map) {
	$set(this, this$0, this$0);
	$set(this, val$entries, val$entries);
	$set(this, val$map, val$map);
}

bool JarVerifier$3::hasMoreElements() {
	$useLocalObjectStack();
	if (this->name != nullptr) {
		return true;
	}
	while ($nc(this->val$entries)->hasMoreElements()) {
		$var($String, value, nullptr);
		$var($ZipEntry, e, $cast($ZipEntry, this->val$entries->nextElement()));
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
	$FieldInfo fieldInfos$$[] = {
		{"this$0", "Ljava/util/jar/JarVerifier;", nullptr, $FINAL | $SYNTHETIC, $field(JarVerifier$3, this$0)},
		{"val$map", "Ljava/util/Map;", nullptr, $FINAL | $SYNTHETIC, $field(JarVerifier$3, val$map)},
		{"val$entries", "Ljava/util/Enumeration;", nullptr, $FINAL | $SYNTHETIC, $field(JarVerifier$3, val$entries)},
		{"name", "Ljava/lang/String;", nullptr, 0, $field(JarVerifier$3, name)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(Ljava/util/jar/JarVerifier;Ljava/util/Enumeration;Ljava/util/Map;)V", nullptr, 0, $method(JarVerifier$3, init$, void, $JarVerifier*, $Enumeration*, $Map*)},
		{"hasMoreElements", "()Z", nullptr, $PUBLIC, $virtualMethod(JarVerifier$3, hasMoreElements, bool)},
		{"nextElement", "()Ljava/lang/String;", nullptr, $PUBLIC, $virtualMethod(JarVerifier$3, nextElement, $Object*)},
		{}
	};
	$EnclosingMethodInfo enclosingMethodInfo$$ = {
		"java.util.jar.JarVerifier",
		"unsignedEntryNames",
		"(Ljava/util/jar/JarFile;)Ljava/util/Enumeration;"
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"java.util.jar.JarVerifier$3", nullptr, nullptr, 0},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"java.util.jar.JarVerifier$3",
		"java.lang.Object",
		"java.util.Enumeration",
		fieldInfos$$,
		methodInfos$$,
		"Ljava/lang/Object;Ljava/util/Enumeration<Ljava/lang/String;>;",
		&enclosingMethodInfo$$,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		nullptr,
		"java.util.jar.JarVerifier"
	};
	$loadClass(JarVerifier$3, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(JarVerifier$3);
	});
	return class$;
}

$Class* JarVerifier$3::class$ = nullptr;

		} // jar
	} // util
} // java