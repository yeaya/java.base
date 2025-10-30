#include <Sharing$OpenClose.h>

#include <Sharing.h>
#include <java/io/FileDescriptor.h>
#include <java/io/FileInputStream.h>
#include <java/io/FileOutputStream.h>
#include <java/io/IOException.h>
#include <java/util/concurrent/CountDownLatch.h>
#include <jcpp.h>

using $Sharing = ::Sharing;
using $FileInputStreamArray = $Array<::java::io::FileInputStream>;
using $FileOutputStreamArray = $Array<::java::io::FileOutputStream>;
using $FileDescriptor = ::java::io::FileDescriptor;
using $FileInputStream = ::java::io::FileInputStream;
using $FileOutputStream = ::java::io::FileOutputStream;
using $IOException = ::java::io::IOException;
using $PrintStream = ::java::io::PrintStream;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $CountDownLatch = ::java::util::concurrent::CountDownLatch;

$FieldInfo _Sharing$OpenClose_FieldInfo_[] = {
	{"fd", "Ljava/io/FileDescriptor;", nullptr, $PRIVATE, $field(Sharing$OpenClose, fd)},
	{"done", "Ljava/util/concurrent/CountDownLatch;", nullptr, $PRIVATE, $field(Sharing$OpenClose, done)},
	{"fisArray", "[Ljava/io/FileInputStream;", nullptr, 0, $field(Sharing$OpenClose, fisArray)},
	{"fosArray", "[Ljava/io/FileOutputStream;", nullptr, 0, $field(Sharing$OpenClose, fosArray)},
	{}
};

$MethodInfo _Sharing$OpenClose_MethodInfo_[] = {
	{"<init>", "(Ljava/io/FileDescriptor;Ljava/util/concurrent/CountDownLatch;)V", nullptr, 0, $method(static_cast<void(Sharing$OpenClose::*)($FileDescriptor*,$CountDownLatch*)>(&Sharing$OpenClose::init$))},
	{"run", "()V", nullptr, $PUBLIC},
	{}
};

$InnerClassInfo _Sharing$OpenClose_InnerClassesInfo_[] = {
	{"Sharing$OpenClose", "Sharing", "OpenClose", $PRIVATE | $STATIC},
	{}
};

$ClassInfo _Sharing$OpenClose_ClassInfo_ = {
	$ACC_SUPER,
	"Sharing$OpenClose",
	"java.lang.Thread",
	nullptr,
	_Sharing$OpenClose_FieldInfo_,
	_Sharing$OpenClose_MethodInfo_,
	nullptr,
	nullptr,
	_Sharing$OpenClose_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"Sharing"
};

$Object* allocate$Sharing$OpenClose($Class* clazz) {
	return $of($alloc(Sharing$OpenClose));
}

void Sharing$OpenClose::init$($FileDescriptor* filedescriptor, $CountDownLatch* done) {
	$Thread::init$();
	$set(this, fd, nullptr);
	$set(this, fisArray, $new($FileInputStreamArray, 10));
	$set(this, fosArray, $new($FileOutputStreamArray, 10));
	$set(this, fd, filedescriptor);
	$set(this, done, done);
}

void Sharing$OpenClose::run() {
	$useLocalCurrentObjectStackCache();
	{
		$var($Throwable, var$0, nullptr);
		try {
			try {
				for (int32_t i = 0; i < 10; ++i) {
					$nc(this->fisArray)->set(i, $$new($FileInputStream, this->fd));
					$nc(this->fosArray)->set(i, $$new($FileOutputStream, this->fd));
				}
				for (int32_t i = 0; i < 10; ++i) {
					if ($nc(this->fisArray)->get(i) != nullptr) {
						$nc($nc(this->fisArray)->get(i))->close();
					}
					if ($nc(this->fosArray)->get(i) != nullptr) {
						$nc($nc(this->fosArray)->get(i))->close();
					}
				}
			} catch ($IOException& ioe) {
				$nc($System::out)->println($$str({"OpenClose encountered IO issue :"_s, ioe}));
				$init($Sharing);
				$Sharing::fail = true;
			}
		} catch ($Throwable& var$1) {
			$assign(var$0, var$1);
		} /*finally*/ {
			if ($nc(this->fd)->valid()) {
				$nc($System::out)->println("OpenClose: FileDescriptor shouldn\'t be valid"_s);
				$init($Sharing);
				$Sharing::fail = true;
			}
			$nc(this->done)->countDown();
		}
		if (var$0 != nullptr) {
			$throw(var$0);
		}
	}
}

Sharing$OpenClose::Sharing$OpenClose() {
}

$Class* Sharing$OpenClose::load$($String* name, bool initialize) {
	$loadClass(Sharing$OpenClose, name, initialize, &_Sharing$OpenClose_ClassInfo_, allocate$Sharing$OpenClose);
	return class$;
}

$Class* Sharing$OpenClose::class$ = nullptr;