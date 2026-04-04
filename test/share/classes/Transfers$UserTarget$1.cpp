#include <Transfers$UserTarget$1.h>
#include <Transfers$UserTarget.h>
#include <java/lang/Math.h>
#include <java/nio/ByteBuffer.h>
#include <jcpp.h>

using $Transfers$UserTarget = ::Transfers$UserTarget;
using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $Math = ::java::lang::Math;
using $MethodInfo = ::java::lang::MethodInfo;
using $ByteBuffer = ::java::nio::ByteBuffer;

void Transfers$UserTarget$1::init$($Transfers$UserTarget* this$0) {
	$set(this, this$0, this$0);
}

int32_t Transfers$UserTarget$1::write($ByteBuffer* src) {
	int32_t var$0 = $nc(src)->remaining();
	int32_t nr = $Math::min(var$0, $nc(this->this$0->dst)->remaining());
	$var($ByteBuffer, s, src->duplicate());
	$nc(s)->limit($nc(s)->position() + nr);
	this->this$0->dst->put(s);
	src->position(src->position() + nr);
	return nr;
}

bool Transfers$UserTarget$1::isOpen() {
	return true;
}

void Transfers$UserTarget$1::close() {
}

Transfers$UserTarget$1::Transfers$UserTarget$1() {
}

$Class* Transfers$UserTarget$1::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"this$0", "LTransfers$UserTarget;", nullptr, $FINAL | $SYNTHETIC, $field(Transfers$UserTarget$1, this$0)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(LTransfers$UserTarget;)V", nullptr, 0, $method(Transfers$UserTarget$1, init$, void, $Transfers$UserTarget*)},
		{"close", "()V", nullptr, $PUBLIC, $virtualMethod(Transfers$UserTarget$1, close, void)},
		{"isOpen", "()Z", nullptr, $PUBLIC, $virtualMethod(Transfers$UserTarget$1, isOpen, bool)},
		{"write", "(Ljava/nio/ByteBuffer;)I", nullptr, $PUBLIC, $virtualMethod(Transfers$UserTarget$1, write, int32_t, $ByteBuffer*)},
		{}
	};
	$EnclosingMethodInfo enclosingMethodInfo$$ = {
		"Transfers$UserTarget",
		"<init>",
		"(IJ)V"
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"Transfers$UserTarget", "Transfers", "UserTarget", $STATIC},
		{"Transfers$UserTarget$1", nullptr, nullptr, 0},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"Transfers$UserTarget$1",
		"java.lang.Object",
		"java.nio.channels.WritableByteChannel",
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
	$loadClass(Transfers$UserTarget$1, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(Transfers$UserTarget$1);
	});
	return class$;
}

$Class* Transfers$UserTarget$1::class$ = nullptr;