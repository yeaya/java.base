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
using $Charset = ::java::nio::charset::Charset;
using $Iterator = ::java::util::Iterator;
using $Set = ::java::util::Set;
using $StandardCharsets = ::sun::nio::cs::StandardCharsets;

namespace sun {
	namespace nio {
		namespace cs {

$FieldInfo _StandardCharsets$1_FieldInfo_[] = {
	{"this$0", "Lsun/nio/cs/StandardCharsets;", nullptr, $FINAL | $SYNTHETIC, $field(StandardCharsets$1, this$0)},
	{"val$charsetNames", "Ljava/util/Set;", nullptr, $FINAL | $SYNTHETIC, $field(StandardCharsets$1, val$charsetNames)},
	{"i", "Ljava/util/Iterator;", "Ljava/util/Iterator<Ljava/lang/String;>;", 0, $field(StandardCharsets$1, i)},
	{}
};

$MethodInfo _StandardCharsets$1_MethodInfo_[] = {
	{"<init>", "(Lsun/nio/cs/StandardCharsets;Ljava/util/Set;)V", "()V", 0, $method(static_cast<void(StandardCharsets$1::*)($StandardCharsets*,$Set*)>(&StandardCharsets$1::init$))},
	{"hasNext", "()Z", nullptr, $PUBLIC},
	{"next", "()Ljava/nio/charset/Charset;", nullptr, $PUBLIC},
	{"remove", "()V", nullptr, $PUBLIC},
	{}
};

$EnclosingMethodInfo _StandardCharsets$1_EnclosingMethodInfo_ = {
	"sun.nio.cs.StandardCharsets",
	"charsets",
	"()Ljava/util/Iterator;"
};

$InnerClassInfo _StandardCharsets$1_InnerClassesInfo_[] = {
	{"sun.nio.cs.StandardCharsets$1", nullptr, nullptr, 0},
	{}
};

$ClassInfo _StandardCharsets$1_ClassInfo_ = {
	$ACC_SUPER,
	"sun.nio.cs.StandardCharsets$1",
	"java.lang.Object",
	"java.util.Iterator",
	_StandardCharsets$1_FieldInfo_,
	_StandardCharsets$1_MethodInfo_,
	"Ljava/lang/Object;Ljava/util/Iterator<Ljava/nio/charset/Charset;>;",
	&_StandardCharsets$1_EnclosingMethodInfo_,
	_StandardCharsets$1_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"sun.nio.cs.StandardCharsets"
};

$Object* allocate$StandardCharsets$1($Class* clazz) {
	return $of($alloc(StandardCharsets$1));
}

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
	return $of(this->this$0->lookup(csn));
}

void StandardCharsets$1::remove() {
	$throwNew($UnsupportedOperationException);
}

StandardCharsets$1::StandardCharsets$1() {
}

$Class* StandardCharsets$1::load$($String* name, bool initialize) {
	$loadClass(StandardCharsets$1, name, initialize, &_StandardCharsets$1_ClassInfo_, allocate$StandardCharsets$1);
	return class$;
}

$Class* StandardCharsets$1::class$ = nullptr;

		} // cs
	} // nio
} // sun