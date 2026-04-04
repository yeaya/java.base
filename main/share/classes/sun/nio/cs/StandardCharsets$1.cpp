#include <sun/nio/cs/StandardCharsets$1.h>
#include <java/lang/UnsupportedOperationException.h>
#include <java/nio/charset/Charset.h>
#include <java/util/Iterator.h>
#include <java/util/Set.h>
#include <sun/nio/cs/StandardCharsets.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $UnsupportedOperationException = ::java::lang::UnsupportedOperationException;
using $Set = ::java::util::Set;
using $StandardCharsets = ::sun::nio::cs::StandardCharsets;

namespace sun {
	namespace nio {
		namespace cs {

void StandardCharsets$1::init$($StandardCharsets* this$0, $Set* val$charsetNames) {
	$set(this, this$0, this$0);
	$set(this, val$charsetNames, val$charsetNames);
	$set(this, i, $nc(this->val$charsetNames)->iterator());
}

bool StandardCharsets$1::hasNext() {
	return $nc(this->i)->hasNext();
}

$Object* StandardCharsets$1::next() {
	$var($String, csn, $cast($String, $nc(this->i)->next()));
	return this->this$0->lookup(csn);
}

void StandardCharsets$1::remove() {
	$throwNew($UnsupportedOperationException);
}

StandardCharsets$1::StandardCharsets$1() {
}

$Class* StandardCharsets$1::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"this$0", "Lsun/nio/cs/StandardCharsets;", nullptr, $FINAL | $SYNTHETIC, $field(StandardCharsets$1, this$0)},
		{"val$charsetNames", "Ljava/util/Set;", nullptr, $FINAL | $SYNTHETIC, $field(StandardCharsets$1, val$charsetNames)},
		{"i", "Ljava/util/Iterator;", "Ljava/util/Iterator<Ljava/lang/String;>;", 0, $field(StandardCharsets$1, i)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(Lsun/nio/cs/StandardCharsets;Ljava/util/Set;)V", "()V", 0, $method(StandardCharsets$1, init$, void, $StandardCharsets*, $Set*)},
		{"hasNext", "()Z", nullptr, $PUBLIC, $virtualMethod(StandardCharsets$1, hasNext, bool)},
		{"next", "()Ljava/nio/charset/Charset;", nullptr, $PUBLIC, $virtualMethod(StandardCharsets$1, next, $Object*)},
		{"remove", "()V", nullptr, $PUBLIC, $virtualMethod(StandardCharsets$1, remove, void)},
		{}
	};
	$EnclosingMethodInfo enclosingMethodInfo$$ = {
		"sun.nio.cs.StandardCharsets",
		"charsets",
		"()Ljava/util/Iterator;"
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"sun.nio.cs.StandardCharsets$1", nullptr, nullptr, 0},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"sun.nio.cs.StandardCharsets$1",
		"java.lang.Object",
		"java.util.Iterator",
		fieldInfos$$,
		methodInfos$$,
		"Ljava/lang/Object;Ljava/util/Iterator<Ljava/nio/charset/Charset;>;",
		&enclosingMethodInfo$$,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		nullptr,
		"sun.nio.cs.StandardCharsets"
	};
	$loadClass(StandardCharsets$1, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(StandardCharsets$1);
	});
	return class$;
}

$Class* StandardCharsets$1::class$ = nullptr;

		} // cs
	} // nio
} // sun