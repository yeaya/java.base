#include <Transfers$Source.h>
#include <Transfers.h>
#include <java/nio/channels/ReadableByteChannel.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $ReadableByteChannel = ::java::nio::channels::ReadableByteChannel;

void Transfers$Source::init$(int32_t size, int64_t seed, $String* name) {
	this->size = size;
	this->seed = seed;
	$set(this, name$, name);
}

$String* Transfers$Source::name() {
	return this->name$;
}

Transfers$Source::Transfers$Source() {
}

$Class* Transfers$Source::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"size", "I", nullptr, $PROTECTED | $FINAL, $field(Transfers$Source, size)},
		{"seed", "J", nullptr, $PROTECTED | $FINAL, $field(Transfers$Source, seed)},
		{"name", "Ljava/lang/String;", nullptr, $PRIVATE | $FINAL, $field(Transfers$Source, name$)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(IJLjava/lang/String;)V", nullptr, 0, $method(Transfers$Source, init$, void, int32_t, int64_t, $String*)},
		{"channel", "()Ljava/nio/channels/ReadableByteChannel;", nullptr, $ABSTRACT, $virtualMethod(Transfers$Source, channel, $ReadableByteChannel*)},
		{"name", "()Ljava/lang/String;", nullptr, 0, $virtualMethod(Transfers$Source, name, $String*)},
		{"verify", "()V", nullptr, $ABSTRACT, $virtualMethod(Transfers$Source, verify, void), "java.io.IOException"},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"Transfers$Source", "Transfers", "Source", $STATIC | $ABSTRACT},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER | $ABSTRACT,
		"Transfers$Source",
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
	$loadClass(Transfers$Source, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(Transfers$Source);
	});
	return class$;
}

$Class* Transfers$Source::class$ = nullptr;