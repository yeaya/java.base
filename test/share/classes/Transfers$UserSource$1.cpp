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

void Transfers$UserSource$1::init$($Transfers$UserSource* this$0) {
	$set(this, this$0, this$0);
}

int32_t Transfers$UserSource$1::read($ByteBuffer* dst) {
	if (!$nc(this->this$0->src)->hasRemaining()) {
		return -1;
	}
	int32_t var$0 = this->this$0->src->remaining();
	int32_t nr = $Math::min(var$0, $nc(dst)->remaining());
	$var($ByteBuffer, s, this->this$0->src->duplicate());
	$nc(s)->limit($nc(s)->position() + nr);
	dst->put(s);
	this->this$0->src->position(this->this$0->src->position() + nr);
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
	$FieldInfo fieldInfos$$[] = {
		{"this$0", "LTransfers$UserSource;", nullptr, $FINAL | $SYNTHETIC, $field(Transfers$UserSource$1, this$0)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(LTransfers$UserSource;)V", nullptr, 0, $method(Transfers$UserSource$1, init$, void, $Transfers$UserSource*)},
		{"close", "()V", nullptr, $PUBLIC, $virtualMethod(Transfers$UserSource$1, close, void)},
		{"isOpen", "()Z", nullptr, $PUBLIC, $virtualMethod(Transfers$UserSource$1, isOpen, bool)},
		{"read", "(Ljava/nio/ByteBuffer;)I", nullptr, $PUBLIC, $virtualMethod(Transfers$UserSource$1, read, int32_t, $ByteBuffer*)},
		{}
	};
	$EnclosingMethodInfo enclosingMethodInfo$$ = {
		"Transfers$UserSource",
		"<init>",
		"(IJ)V"
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"Transfers$UserSource", "Transfers", "UserSource", $STATIC},
		{"Transfers$UserSource$1", nullptr, nullptr, 0},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"Transfers$UserSource$1",
		"java.lang.Object",
		"java.nio.channels.ReadableByteChannel",
		fieldInfos$$,
		methodInfos$$,
		nullptr,
		&enclosingMethodInfo$$,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		nullptr,
		"Transfers"
	};
	$loadClass(Transfers$UserSource$1, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(Transfers$UserSource$1);
	});
	return class$;
}

$Class* Transfers$UserSource$1::class$ = nullptr;