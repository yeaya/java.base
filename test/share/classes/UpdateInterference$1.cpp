#include <UpdateInterference$1.h>

#include <UpdateInterference.h>
#include <java/io/IOException.h>
#include <java/lang/InterruptedException.h>
#include <java/nio/file/Files.h>
#include <java/nio/file/Path.h>
#include <java/nio/file/attribute/FileAttribute.h>
#include <jcpp.h>

using $UpdateInterference = ::UpdateInterference;
using $FileAttributeArray = $Array<::java::nio::file::attribute::FileAttribute>;
using $IOException = ::java::io::IOException;
using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $Exception = ::java::lang::Exception;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $InterruptedException = ::java::lang::InterruptedException;
using $MethodInfo = ::java::lang::MethodInfo;
using $RuntimeException = ::java::lang::RuntimeException;
using $Files = ::java::nio::file::Files;
using $Path = ::java::nio::file::Path;

$FieldInfo _UpdateInterference$1_FieldInfo_[] = {
	{"val$foo", "Ljava/nio/file/Path;", nullptr, $FINAL | $SYNTHETIC, $field(UpdateInterference$1, val$foo)},
	{}
};

$MethodInfo _UpdateInterference$1_MethodInfo_[] = {
	{"<init>", "(Ljava/nio/file/Path;)V", nullptr, 0, $method(UpdateInterference$1, init$, void, $Path*)},
	{"run", "()V", nullptr, $PUBLIC, $virtualMethod(UpdateInterference$1, run, void)},
	{}
};

$EnclosingMethodInfo _UpdateInterference$1_EnclosingMethodInfo_ = {
	"UpdateInterference",
	"main",
	"([Ljava/lang/String;)V"
};

$InnerClassInfo _UpdateInterference$1_InnerClassesInfo_[] = {
	{"UpdateInterference$1", nullptr, nullptr, 0},
	{}
};

$ClassInfo _UpdateInterference$1_ClassInfo_ = {
	$ACC_SUPER,
	"UpdateInterference$1",
	"java.lang.Thread",
	nullptr,
	_UpdateInterference$1_FieldInfo_,
	_UpdateInterference$1_MethodInfo_,
	nullptr,
	&_UpdateInterference$1_EnclosingMethodInfo_,
	_UpdateInterference$1_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"UpdateInterference"
};

$Object* allocate$UpdateInterference$1($Class* clazz) {
	return $of($alloc(UpdateInterference$1));
}

void UpdateInterference$1::init$($Path* val$foo) {
	$set(this, val$foo, val$foo);
	$Thread::init$();
}

void UpdateInterference$1::run() {
	$useLocalCurrentObjectStackCache();
	$init($UpdateInterference);
	while (!$UpdateInterference::stop) {
		try {
			$var($Path, temp, $Files::createTempFile(this->val$foo, "temp"_s, ".tmp"_s, $$new($FileAttributeArray, 0)));
			$Files::delete$(temp);
			$Thread::sleep(10);
		} catch ($IOException& e) {
			$throwNew($RuntimeException, static_cast<$Throwable*>(e));
		} catch ($InterruptedException& e) {
			$throwNew($RuntimeException, static_cast<$Throwable*>(e));
		}
	}
}

UpdateInterference$1::UpdateInterference$1() {
}

$Class* UpdateInterference$1::load$($String* name, bool initialize) {
	$loadClass(UpdateInterference$1, name, initialize, &_UpdateInterference$1_ClassInfo_, allocate$UpdateInterference$1);
	return class$;
}

$Class* UpdateInterference$1::class$ = nullptr;