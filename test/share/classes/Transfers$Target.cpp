#include <Transfers$Target.h>
#include <Transfers.h>
#include <java/nio/channels/WritableByteChannel.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $WritableByteChannel = ::java::nio::channels::WritableByteChannel;

void Transfers$Target::init$(int32_t size, int64_t seed, $String* name) {
	this->size = size;
	this->seed = seed;
	$set(this, name$, name);
}

$String* Transfers$Target::name() {
	return this->name$;
}

Transfers$Target::Transfers$Target() {
}

$Class* Transfers$Target::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"size", "I", nullptr, $PROTECTED | $FINAL, $field(Transfers$Target, size)},
		{"seed", "J", nullptr, $PROTECTED | $FINAL, $field(Transfers$Target, seed)},
		{"name", "Ljava/lang/String;", nullptr, $PRIVATE | $FINAL, $field(Transfers$Target, name$)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(IJLjava/lang/String;)V", nullptr, 0, $method(Transfers$Target, init$, void, int32_t, int64_t, $String*)},
		{"channel", "()Ljava/nio/channels/WritableByteChannel;", nullptr, $ABSTRACT, $virtualMethod(Transfers$Target, channel, $WritableByteChannel*)},
		{"name", "()Ljava/lang/String;", nullptr, 0, $virtualMethod(Transfers$Target, name, $String*)},
		{"verify", "()V", nullptr, $ABSTRACT, $virtualMethod(Transfers$Target, verify, void), "java.io.IOException"},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"Transfers$Target", "Transfers", "Target", $STATIC | $ABSTRACT},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER | $ABSTRACT,
		"Transfers$Target",
		"java.lang.Object",
		nullptr,
		fieldInfos$$,
		methodInfos$$,
		nullptr,
		nullptr,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		nullptr,
		"Transfers"
	};
	$loadClass(Transfers$Target, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(Transfers$Target);
	});
	return class$;
}

$Class* Transfers$Target::class$ = nullptr;