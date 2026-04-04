#include <java/util/Collections$3.h>
#include <java/util/Collection.h>
#include <java/util/Collections.h>
#include <java/util/Iterator.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $Collection = ::java::util::Collection;

namespace java {
	namespace util {

void Collections$3::init$($Collection* val$c) {
	$set(this, val$c, val$c);
	$set(this, i, $nc(this->val$c)->iterator());
}

bool Collections$3::hasMoreElements() {
	return $nc(this->i)->hasNext();
}

$Object* Collections$3::nextElement() {
	return $nc(this->i)->next();
}

Collections$3::Collections$3() {
}

$Class* Collections$3::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"val$c", "Ljava/util/Collection;", nullptr, $FINAL | $SYNTHETIC, $field(Collections$3, val$c)},
		{"i", "Ljava/util/Iterator;", "Ljava/util/Iterator<TT;>;", $PRIVATE | $FINAL, $field(Collections$3, i)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(Ljava/util/Collection;)V", "()V", 0, $method(Collections$3, init$, void, $Collection*)},
		{"hasMoreElements", "()Z", nullptr, $PUBLIC, $virtualMethod(Collections$3, hasMoreElements, bool)},
		{"nextElement", "()Ljava/lang/Object;", "()TT;", $PUBLIC, $virtualMethod(Collections$3, nextElement, $Object*)},
		{}
	};
	$EnclosingMethodInfo enclosingMethodInfo$$ = {
		"java.util.Collections",
		"enumeration",
		"(Ljava/util/Collection;)Ljava/util/Enumeration;"
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"java.util.Collections$3", nullptr, nullptr, 0},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"java.util.Collections$3",
		"java.lang.Object",
		"java.util.Enumeration",
		fieldInfos$$,
		methodInfos$$,
		"Ljava/lang/Object;Ljava/util/Enumeration<TT;>;",
		&enclosingMethodInfo$$,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		nullptr,
		"java.util.Collections"
	};
	$loadClass(Collections$3, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(Collections$3);
	});
	return class$;
}

$Class* Collections$3::class$ = nullptr;

	} // util
} // java