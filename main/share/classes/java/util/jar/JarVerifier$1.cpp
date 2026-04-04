#include <java/util/jar/JarVerifier$1.h>
#include <java/util/Enumeration.h>
#include <java/util/Iterator.h>
#include <java/util/List.h>
#include <java/util/Map$Entry.h>
#include <java/util/NoSuchElementException.h>
#include <java/util/jar/JarVerifier.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $Enumeration = ::java::util::Enumeration;
using $Iterator = ::java::util::Iterator;
using $List = ::java::util::List;
using $Map$Entry = ::java::util::Map$Entry;
using $NoSuchElementException = ::java::util::NoSuchElementException;
using $JarVerifier = ::java::util::jar::JarVerifier;

namespace java {
	namespace util {
		namespace jar {

void JarVerifier$1::init$($JarVerifier* this$0, $Iterator* val$itor, $List* val$signersReq, $Enumeration* val$enum2) {
	$set(this, this$0, this$0);
	$set(this, val$itor, val$itor);
	$set(this, val$signersReq, val$signersReq);
	$set(this, val$enum2, val$enum2);
}

bool JarVerifier$1::hasMoreElements() {
	$useLocalObjectStack();
	if (this->name != nullptr) {
		return true;
	}
	while ($nc(this->val$itor)->hasNext()) {
		$var($Map$Entry, e, $cast($Map$Entry, this->val$itor->next()));
		if ($nc(this->val$signersReq)->contains($($nc(e)->getValue()))) {
			$set(this, name, $cast($String, e->getKey()));
			return true;
		}
	}
	while ($nc(this->val$enum2)->hasMoreElements()) {
		$set(this, name, $cast($String, this->val$enum2->nextElement()));
		return true;
	}
	return false;
}

$Object* JarVerifier$1::nextElement() {
	if (hasMoreElements()) {
		$var($String, value, this->name);
		$set(this, name, nullptr);
		return $of(value);
	}
	$throwNew($NoSuchElementException);
}

JarVerifier$1::JarVerifier$1() {
}

$Class* JarVerifier$1::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"this$0", "Ljava/util/jar/JarVerifier;", nullptr, $FINAL | $SYNTHETIC, $field(JarVerifier$1, this$0)},
		{"val$enum2", "Ljava/util/Enumeration;", nullptr, $FINAL | $SYNTHETIC, $field(JarVerifier$1, val$enum2)},
		{"val$signersReq", "Ljava/util/List;", nullptr, $FINAL | $SYNTHETIC, $field(JarVerifier$1, val$signersReq)},
		{"val$itor", "Ljava/util/Iterator;", nullptr, $FINAL | $SYNTHETIC, $field(JarVerifier$1, val$itor)},
		{"name", "Ljava/lang/String;", nullptr, 0, $field(JarVerifier$1, name)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(Ljava/util/jar/JarVerifier;Ljava/util/Iterator;Ljava/util/List;Ljava/util/Enumeration;)V", nullptr, 0, $method(JarVerifier$1, init$, void, $JarVerifier*, $Iterator*, $List*, $Enumeration*)},
		{"hasMoreElements", "()Z", nullptr, $PUBLIC, $virtualMethod(JarVerifier$1, hasMoreElements, bool)},
		{"nextElement", "()Ljava/lang/String;", nullptr, $PUBLIC, $virtualMethod(JarVerifier$1, nextElement, $Object*)},
		{}
	};
	$EnclosingMethodInfo enclosingMethodInfo$$ = {
		"java.util.jar.JarVerifier",
		"entryNames",
		"(Ljava/util/jar/JarFile;[Ljava/security/CodeSource;)Ljava/util/Enumeration;"
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"java.util.jar.JarVerifier$1", nullptr, nullptr, 0},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"java.util.jar.JarVerifier$1",
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
	$loadClass(JarVerifier$1, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(JarVerifier$1);
	});
	return class$;
}

$Class* JarVerifier$1::class$ = nullptr;

		} // jar
	} // util
} // java