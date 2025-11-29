#include <Transfers$UserSource$1.h>

#include <Transfers$UserSource.h>
#include <java/lang/Math.h>
#include <java/nio/ByteBuffer.h>
#include <jcpp.h>

using $Transfers$UserSource = ::Transfers$UserSource;
using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $Math = ::java::lang::Math;
using $MethodInfo = ::java::lang::MethodInfo;
using $ByteBuffer = ::java::nio::ByteBuffer;

$FieldInfo _Transfers$UserSource$1_FieldInfo_[] = {
	{"this$0", "LTransfers$UserSource;", nullptr, $FINAL | $SYNTHETIC, $field(Transfers$UserSource$1, this$0)},
	{}
};

$MethodInfo _Transfers$UserSource$1_MethodInfo_[] = {
	{"<init>", "(LTransfers$UserSource;)V", nullptr, 0, $method(static_cast<void(Transfers$UserSource$1::*)($Transfers$UserSource*)>(&Transfers$UserSource$1::init$))},
	{"close", "()V", nullptr, $PUBLIC},
	{"isOpen", "()Z", nullptr, $PUBLIC},
	{"read", "(Ljava/nio/ByteBuffer;)I", nullptr, $PUBLIC},
	{}
};

$EnclosingMethodInfo _Transfers$UserSource$1_EnclosingMethodInfo_ = {
	"Transfers$UserSource",
	"<init>",
	"(IJ)V"
};

$InnerClassInfo _Transfers$UserSource$1_InnerClassesInfo_[] = {
	{"Transfers$UserSource", "Transfers", "UserSource", $STATIC},
	{"Transfers$UserSource$1", nullptr, nullptr, 0},
	{}
};

$ClassInfo _Transfers$UserSource$1_ClassInfo_ = {
	$ACC_SUPER,
	"Transfers$UserSource$1",
	"java.lang.Object",
	"java.nio.channels.ReadableByteChannel",
	_Transfers$UserSource$1_FieldInfo_,
	_Transfers$UserSource$1_MethodInfo_,
	nullptr,
	&_Transfers$UserSource$1_EnclosingMethodInfo_,
	_Transfers$UserSource$1_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"Transfers"
};

$Object* allocate$Transfers$UserSource$1($Class* clazz) {
	return $of($alloc(Transfers$UserSource$1));
}

void Transfers$UserSource$1::init$($Transfers$UserSource* this$0) {
	$set(this, this$0, this$0);
}

int32_t Transfers$UserSource$1::read($ByteBuffer* dst) {
	if (!$nc(this->this$0->src)->hasRemaining()) {
		return -1;
	}
	int32_t var$0 = $nc(this->this$0->src)->remaining();
	int32_t nr = $Math::min(var$0, $nc(dst)->remaining());
	$var($ByteBuffer, s, $nc(this->this$0->src)->duplicate());
	$nc(s)->limit(s->position() + nr);
	$nc(dst)->put(s);
	$nc(this->this$0->src)->position($nc(this->this$0->src)->position() + nr);
	return nr;
}

bool Transfers$UserSource$1::isOpen() {
	return true;
}

void Transfers$UserSource$1::close() {
}

Transfers$UserSource$1::Transfers$UserSource$1() {
}

$Class* Transfers$UserSource$1::load$($String* name, bool initialize) {
	$loadClass(Transfers$UserSource$1, name, initialize, &_Transfers$UserSource$1_ClassInfo_, allocate$Transfers$UserSource$1);
	return class$;
}

$Class* Transfers$UserSource$1::class$ = nullptr;