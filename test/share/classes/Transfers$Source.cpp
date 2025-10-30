#include <Transfers$Source.h>

#include <Transfers.h>
#include <java/nio/channels/ReadableByteChannel.h>
#include <jcpp.h>

using $Transfers = ::Transfers;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $ReadableByteChannel = ::java::nio::channels::ReadableByteChannel;

$FieldInfo _Transfers$Source_FieldInfo_[] = {
	{"size", "I", nullptr, $PROTECTED | $FINAL, $field(Transfers$Source, size)},
	{"seed", "J", nullptr, $PROTECTED | $FINAL, $field(Transfers$Source, seed)},
	{"name", "Ljava/lang/String;", nullptr, $PRIVATE | $FINAL, $field(Transfers$Source, name$)},
	{}
};

$MethodInfo _Transfers$Source_MethodInfo_[] = {
	{"<init>", "(IJLjava/lang/String;)V", nullptr, 0, $method(static_cast<void(Transfers$Source::*)(int32_t,int64_t,$String*)>(&Transfers$Source::init$))},
	{"channel", "()Ljava/nio/channels/ReadableByteChannel;", nullptr, $ABSTRACT},
	{"name", "()Ljava/lang/String;", nullptr, 0},
	{"verify", "()V", nullptr, $ABSTRACT, nullptr, "java.io.IOException"},
	{}
};

$InnerClassInfo _Transfers$Source_InnerClassesInfo_[] = {
	{"Transfers$Source", "Transfers", "Source", $STATIC | $ABSTRACT},
	{}
};

$ClassInfo _Transfers$Source_ClassInfo_ = {
	$ACC_SUPER | $ABSTRACT,
	"Transfers$Source",
	"java.lang.Object",
	nullptr,
	_Transfers$Source_FieldInfo_,
	_Transfers$Source_MethodInfo_,
	nullptr,
	nullptr,
	_Transfers$Source_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"Transfers"
};

$Object* allocate$Transfers$Source($Class* clazz) {
	return $of($alloc(Transfers$Source));
}

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
	$loadClass(Transfers$Source, name, initialize, &_Transfers$Source_ClassInfo_, allocate$Transfers$Source);
	return class$;
}

$Class* Transfers$Source::class$ = nullptr;