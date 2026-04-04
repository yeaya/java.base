#include <java/util/Enumeration$1.h>
#include <java/util/Enumeration.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $Enumeration = ::java::util::Enumeration;

namespace java {
	namespace util {

void Enumeration$1::init$($Enumeration* this$0) {
	$set(this, this$0, this$0);
}

bool Enumeration$1::hasNext() {
	return this->this$0->hasMoreElements();
}

$Object* Enumeration$1::next() {
	return this->this$0->nextElement();
}

Enumeration$1::Enumeration$1() {
}

$Class* Enumeration$1::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"this$0", "Ljava/util/Enumeration;", nullptr, $FINAL | $SYNTHETIC, $field(Enumeration$1, this$0)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(Ljava/util/Enumeration;)V", nullptr, 0, $method(Enumeration$1, init$, void, $Enumeration*)},
		{"hasNext", "()Z", nullptr, $PUBLIC, $virtualMethod(Enumeration$1, hasNext, bool)},
		{"next", "()Ljava/lang/Object;", "()TE;", $PUBLIC, $virtualMethod(Enumeration$1, next, $Object*)},
		{}
	};
	$EnclosingMethodInfo enclosingMethodInfo$$ = {
		"java.util.Enumeration",
		"asIterator",
		"()Ljava/util/Iterator;"
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"java.util.Enumeration$1", nullptr, nullptr, 0},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"java.util.Enumeration$1",
		"java.lang.Object",
		"java.util.Iterator",
		fieldInfos$$,
		methodInfos$$,
		"Ljava/lang/Object;Ljava/util/Iterator<TE;>;",
		&enclosingMethodInfo$$,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		nullptr,
		"java.util.Enumeration"
	};
	$loadClass(Enumeration$1, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(Enumeration$1);
	});
	return class$;
}

$Class* Enumeration$1::class$ = nullptr;

	} // util
} // java