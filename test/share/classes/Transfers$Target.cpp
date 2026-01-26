#include <Transfers$Target.h>

#include <Transfers.h>
#include <java/nio/channels/WritableByteChannel.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $WritableByteChannel = ::java::nio::channels::WritableByteChannel;

$FieldInfo _Transfers$Target_FieldInfo_[] = {
	{"size", "I", nullptr, $PROTECTED | $FINAL, $field(Transfers$Target, size)},
	{"seed", "J", nullptr, $PROTECTED | $FINAL, $field(Transfers$Target, seed)},
	{"name", "Ljava/lang/String;", nullptr, $PRIVATE | $FINAL, $field(Transfers$Target, name$)},
	{}
};

$MethodInfo _Transfers$Target_MethodInfo_[] = {
	{"<init>", "(IJLjava/lang/String;)V", nullptr, 0, $method(Transfers$Target, init$, void, int32_t, int64_t, $String*)},
	{"channel", "()Ljava/nio/channels/WritableByteChannel;", nullptr, $ABSTRACT, $virtualMethod(Transfers$Target, channel, $WritableByteChannel*)},
	{"name", "()Ljava/lang/String;", nullptr, 0, $virtualMethod(Transfers$Target, name, $String*)},
	{"verify", "()V", nullptr, $ABSTRACT, $virtualMethod(Transfers$Target, verify, void), "java.io.IOException"},
	{}
};

$InnerClassInfo _Transfers$Target_InnerClassesInfo_[] = {
	{"Transfers$Target", "Transfers", "Target", $STATIC | $ABSTRACT},
	{}
};

$ClassInfo _Transfers$Target_ClassInfo_ = {
	$ACC_SUPER | $ABSTRACT,
	"Transfers$Target",
	"java.lang.Object",
	nullptr,
	_Transfers$Target_FieldInfo_,
	_Transfers$Target_MethodInfo_,
	nullptr,
	nullptr,
	_Transfers$Target_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"Transfers"
};

$Object* allocate$Transfers$Target($Class* clazz) {
	return $of($alloc(Transfers$Target));
}

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
	$loadClass(Transfers$Target, name, initialize, &_Transfers$Target_ClassInfo_, allocate$Transfers$Target);
	return class$;
}

$Class* Transfers$Target::class$ = nullptr;