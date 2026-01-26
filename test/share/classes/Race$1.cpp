#include <Race$1.h>

#include <Race.h>
#include <java/io/InputStream.h>
#include <java/net/SocketException.h>
#include <java/util/concurrent/Phaser.h>
#include <jcpp.h>

using $InputStream = ::java::io::InputStream;
using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $Exception = ::java::lang::Exception;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $SocketException = ::java::net::SocketException;
using $Phaser = ::java::util::concurrent::Phaser;

$FieldInfo _Race$1_FieldInfo_[] = {
	{"val$is", "Ljava/io/InputStream;", nullptr, $FINAL | $SYNTHETIC, $field(Race$1, val$is)},
	{"val$phaser", "Ljava/util/concurrent/Phaser;", nullptr, $FINAL | $SYNTHETIC, $field(Race$1, val$phaser)},
	{}
};

$MethodInfo _Race$1_MethodInfo_[] = {
	{"<init>", "(Ljava/util/concurrent/Phaser;Ljava/io/InputStream;)V", nullptr, 0, $method(Race$1, init$, void, $Phaser*, $InputStream*)},
	{"run", "()V", nullptr, $PUBLIC, $virtualMethod(Race$1, run, void)},
	{}
};

$EnclosingMethodInfo _Race$1_EnclosingMethodInfo_ = {
	"Race",
	"main",
	"([Ljava/lang/String;)V"
};

$InnerClassInfo _Race$1_InnerClassesInfo_[] = {
	{"Race$1", nullptr, nullptr, 0},
	{}
};

$ClassInfo _Race$1_ClassInfo_ = {
	$ACC_SUPER,
	"Race$1",
	"java.lang.Thread",
	nullptr,
	_Race$1_FieldInfo_,
	_Race$1_MethodInfo_,
	nullptr,
	&_Race$1_EnclosingMethodInfo_,
	_Race$1_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"Race"
};

$Object* allocate$Race$1($Class* clazz) {
	return $of($alloc(Race$1));
}

void Race$1::init$($Phaser* val$phaser, $InputStream* val$is) {
	$set(this, val$phaser, val$phaser);
	$set(this, val$is, val$is);
	$Thread::init$();
}

void Race$1::run() {
	try {
		$nc(this->val$phaser)->arriveAndAwaitAdvance();
		while ($nc(this->val$is)->read() != -1) {
			$Thread::sleep(50);
		}
	} catch ($Exception& x) {
		if (!($instanceOf($SocketException, x) && $nc($(x->getMessage()))->equalsIgnoreCase("socket closed"_s))) {
			x->printStackTrace();
		}
	}
}

Race$1::Race$1() {
}

$Class* Race$1::load$($String* name, bool initialize) {
	$loadClass(Race$1, name, initialize, &_Race$1_ClassInfo_, allocate$Race$1);
	return class$;
}

$Class* Race$1::class$ = nullptr;