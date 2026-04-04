#include <java/util/jar/JarFile$1.h>
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

namespace java {
	namespace util {
		namespace jar {

void JarFile$1::init$($JarFile* this$0, $Enumeration* val$unfilteredEntries) {
	$set(this, this$0, this$0);
	$set(this, val$unfilteredEntries, val$unfilteredEntries);
}

bool JarFile$1::hasMoreElements() {
	$useLocalObjectStack();
	if (this->entry != nullptr) {
		return true;
	}
	while ($nc(this->val$unfilteredEntries)->hasMoreElements()) {
		$var($JarEntry, je, $cast($JarEntry, this->val$unfilteredEntries->nextElement()));
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
	$FieldInfo fieldInfos$$[] = {
		{"this$0", "Ljava/util/jar/JarFile;", nullptr, $FINAL | $SYNTHETIC, $field(JarFile$1, this$0)},
		{"val$unfilteredEntries", "Ljava/util/Enumeration;", nullptr, $FINAL | $SYNTHETIC, $field(JarFile$1, val$unfilteredEntries)},
		{"entry", "Ljava/util/jar/JarEntry;", nullptr, 0, $field(JarFile$1, entry)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(Ljava/util/jar/JarFile;Ljava/util/Enumeration;)V", nullptr, 0, $method(JarFile$1, init$, void, $JarFile*, $Enumeration*)},
		{"hasMoreElements", "()Z", nullptr, $PUBLIC, $virtualMethod(JarFile$1, hasMoreElements, bool)},
		{"nextElement", "()Ljava/util/jar/JarEntry;", nullptr, $PUBLIC, $virtualMethod(JarFile$1, nextElement, $Object*)},
		{}
	};
	$EnclosingMethodInfo enclosingMethodInfo$$ = {
		"java.util.jar.JarFile",
		"entries2",
		"()Ljava/util/Enumeration;"
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"java.util.jar.JarFile$1", nullptr, nullptr, 0},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"java.util.jar.JarFile$1",
		"java.lang.Object",
		"java.util.Enumeration",
		fieldInfos$$,
		methodInfos$$,
		"Ljava/lang/Object;Ljava/util/Enumeration<Ljava/util/jar/JarEntry;>;",
		&enclosingMethodInfo$$,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		nullptr,
		"java.util.jar.JarFile"
	};
	$loadClass(JarFile$1, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(JarFile$1);
	});
	return class$;
}

$Class* JarFile$1::class$ = nullptr;

		} // jar
	} // util
} // java