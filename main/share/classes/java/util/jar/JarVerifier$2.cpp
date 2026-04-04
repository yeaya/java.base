#include <java/util/jar/JarVerifier$2.h>
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
using $Collections = ::java::util::Collections;
using $Enumeration = ::java::util::Enumeration;
using $Map = ::java::util::Map;
using $NoSuchElementException = ::java::util::NoSuchElementException;
using $JarEntry = ::java::util::jar::JarEntry;
using $JarFile = ::java::util::jar::JarFile;
using $JarVerifier = ::java::util::jar::JarVerifier;

namespace java {
	namespace util {
		namespace jar {

void JarVerifier$2::init$($JarVerifier* this$0, $Enumeration* val$enum_, $JarFile* val$jar, $Map* val$map) {
	$set(this, this$0, this$0);
	$set(this, val$enum_, val$enum_);
	$set(this, val$jar, val$jar);
	$set(this, val$map, val$map);
	$set(this, signers, nullptr);
}

bool JarVerifier$2::hasMoreElements() {
	$useLocalObjectStack();
	if (this->entry != nullptr) {
		return true;
	}
	while ($nc(this->val$enum_)->hasMoreElements()) {
		$var($JarEntry, je, $cast($JarEntry, this->val$enum_->nextElement()));
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
		$var($String, name, $cast($String, this->signers->nextElement()));
		$set(this, entry, $nc(this->val$jar)->newEntry(name));
		return true;
	}
	return false;
}

$Object* JarVerifier$2::nextElement() {
	$useLocalObjectStack();
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
	$FieldInfo fieldInfos$$[] = {
		{"this$0", "Ljava/util/jar/JarVerifier;", nullptr, $FINAL | $SYNTHETIC, $field(JarVerifier$2, this$0)},
		{"val$map", "Ljava/util/Map;", nullptr, $FINAL | $SYNTHETIC, $field(JarVerifier$2, val$map)},
		{"val$jar", "Ljava/util/jar/JarFile;", nullptr, $FINAL | $SYNTHETIC, $field(JarVerifier$2, val$jar)},
		{"val$enum_", "Ljava/util/Enumeration;", nullptr, $FINAL | $SYNTHETIC, $field(JarVerifier$2, val$enum_)},
		{"signers", "Ljava/util/Enumeration;", "Ljava/util/Enumeration<Ljava/lang/String;>;", 0, $field(JarVerifier$2, signers)},
		{"entry", "Ljava/util/jar/JarEntry;", nullptr, 0, $field(JarVerifier$2, entry)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(Ljava/util/jar/JarVerifier;Ljava/util/Enumeration;Ljava/util/jar/JarFile;Ljava/util/Map;)V", nullptr, 0, $method(JarVerifier$2, init$, void, $JarVerifier*, $Enumeration*, $JarFile*, $Map*)},
		{"hasMoreElements", "()Z", nullptr, $PUBLIC, $virtualMethod(JarVerifier$2, hasMoreElements, bool)},
		{"nextElement", "()Ljava/util/jar/JarEntry;", nullptr, $PUBLIC, $virtualMethod(JarVerifier$2, nextElement, $Object*)},
		{}
	};
	$EnclosingMethodInfo enclosingMethodInfo$$ = {
		"java.util.jar.JarVerifier",
		"entries2",
		"(Ljava/util/jar/JarFile;Ljava/util/Enumeration;)Ljava/util/Enumeration;"
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"java.util.jar.JarVerifier$2", nullptr, nullptr, 0},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"java.util.jar.JarVerifier$2",
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
		"java.util.jar.JarVerifier"
	};
	$loadClass(JarVerifier$2, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(JarVerifier$2);
	});
	return class$;
}

$Class* JarVerifier$2::class$ = nullptr;

		} // jar
	} // util
} // java