#include <Args$3.h>
#include <Args.h>
#include <java/nio/channels/FileChannel.h>
#include <java/nio/channels/SeekableByteChannel.h>
#include <java/nio/channels/WritableByteChannel.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $FileChannel = ::java::nio::channels::FileChannel;
using $SeekableByteChannel = ::java::nio::channels::SeekableByteChannel;

void Args$3::init$($FileChannel* val$fc) {
	$set(this, val$fc, val$fc);
}

void Args$3::run() {
	$nc(this->val$fc)->transferTo(-1, 1, $cast($SeekableByteChannel, this->val$fc));
}

Args$3::Args$3() {
}

$Class* Args$3::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"val$fc", "Ljava/nio/channels/FileChannel;", nullptr, $FINAL | $SYNTHETIC, $field(Args$3, val$fc)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(Ljava/nio/channels/FileChannel;)V", "()V", 0, $method(Args$3, init$, void, $FileChannel*)},
		{"run", "()V", nullptr, $PUBLIC, $virtualMethod(Args$3, run, void), "java.lang.Exception"},
		{}
	};
	$EnclosingMethodInfo enclosingMethodInfo$$ = {
		"Args",
		"main",
		"([Ljava/lang/String;)V"
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"Args$3", nullptr, nullptr, 0},
		{"Args$Thunk", "Args", "Thunk", $STATIC | $INTERFACE | $ABSTRACT},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"Args$3",
		"java.lang.Object",
		"Args$Thunk",
		fieldInfos$$,
		methodInfos$$,
		nullptr,
		&enclosingMethodInfo$$,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		nullptr,
		"Args"
	};
	$loadClass(Args$3, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(Args$3);
	});
	return class$;
}

$Class* Args$3::class$ = nullptr;