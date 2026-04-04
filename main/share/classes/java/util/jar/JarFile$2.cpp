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

void JarFile$2::init$($JarFile* this$0, $Enumeration* val$entries) {
	$set(this, this$0, this$0);
	$set(this, val$entries, val$entries);
}

bool JarFile$2::hasMoreElements() {
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
	$FieldInfo fieldInfos$$[] = {
		{"this$0", "Ljava/util/jar/JarFile;", nullptr, $FINAL | $SYNTHETIC, $field(JarFile$2, this$0)},
		{"val$entries", "Ljava/util/Enumeration;", nullptr, $FINAL | $SYNTHETIC, $field(JarFile$2, val$entries)},
		{"name", "Ljava/lang/String;", nullptr, 0, $field(JarFile$2, name)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(Ljava/util/jar/JarFile;Ljava/util/Enumeration;)V", nullptr, 0, $method(JarFile$2, init$, void, $JarFile*, $Enumeration*)},
		{"hasMoreElements", "()Z", nullptr, $PUBLIC, $virtualMethod(JarFile$2, hasMoreElements, bool)},
		{"nextElement", "()Ljava/lang/String;", nullptr, $PUBLIC, $virtualMethod(JarFile$2, nextElement, $Object*)},
		{}
	};
	$EnclosingMethodInfo enclosingMethodInfo$$ = {
		"java.util.jar.JarFile",
		"unsignedEntryNames",
		"()Ljava/util/Enumeration;"
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"java.util.jar.JarFile$2", nullptr, nullptr, 0},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"java.util.jar.JarFile$2",
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
		"java.util.jar.JarFile"
	};
	$loadClass(JarFile$2, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(JarFile$2);
	});
	return class$;
}

$Class* JarFile$2::class$ = nullptr;

		} // jar
	} // util
} // java