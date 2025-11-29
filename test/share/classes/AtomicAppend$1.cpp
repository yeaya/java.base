#include <AtomicAppend$1.h>

#include <AtomicAppend.h>
#include <java/io/File.h>
#include <java/io/IOException.h>
#include <java/io/OutputStream.h>
#include <java/nio/channels/FileChannel.h>
#include <java/util/Random.h>
#include <jcpp.h>

using $AtomicAppend = ::AtomicAppend;
using $File = ::java::io::File;
using $IOException = ::java::io::IOException;
using $OutputStream = ::java::io::OutputStream;
using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $FileChannel = ::java::nio::channels::FileChannel;
using $Random = ::java::util::Random;

$FieldInfo _AtomicAppend$1_FieldInfo_[] = {
	{"val$file", "Ljava/io/File;", nullptr, $FINAL | $SYNTHETIC, $field(AtomicAppend$1, val$file)},
	{}
};

$MethodInfo _AtomicAppend$1_MethodInfo_[] = {
	{"<init>", "(Ljava/io/File;)V", "()V", 0, $method(static_cast<void(AtomicAppend$1::*)($File*)>(&AtomicAppend$1::init$))},
	{"run", "()V", nullptr, $PUBLIC},
	{}
};

$EnclosingMethodInfo _AtomicAppend$1_EnclosingMethodInfo_ = {
	"AtomicAppend",
	"main",
	"([Ljava/lang/String;)V"
};

$InnerClassInfo _AtomicAppend$1_InnerClassesInfo_[] = {
	{"AtomicAppend$1", nullptr, nullptr, 0},
	{}
};

$ClassInfo _AtomicAppend$1_ClassInfo_ = {
	$ACC_SUPER,
	"AtomicAppend$1",
	"java.lang.Object",
	"java.lang.Runnable",
	_AtomicAppend$1_FieldInfo_,
	_AtomicAppend$1_MethodInfo_,
	nullptr,
	&_AtomicAppend$1_EnclosingMethodInfo_,
	_AtomicAppend$1_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"AtomicAppend"
};

$Object* allocate$AtomicAppend$1($Class* clazz) {
	return $of($alloc(AtomicAppend$1));
}

void AtomicAppend$1::init$($File* val$file) {
	$set(this, val$file, val$file);
}

void AtomicAppend$1::run() {
	$useLocalCurrentObjectStackCache();
	try {
		$init($AtomicAppend);
		if ($nc($AtomicAppend::rand)->nextBoolean()) {
			{
				$var($FileChannel, fc, $AtomicAppend::newFileChannel(this->val$file));
				{
					$var($Throwable, var$0, nullptr);
					try {
						try {
							for (int32_t j = 0; j < 1000; ++j) {
								$AtomicAppend::write(fc, u'x');
							}
						} catch ($Throwable& t$) {
							if (fc != nullptr) {
								try {
									fc->close();
								} catch ($Throwable& x2) {
									t$->addSuppressed(x2);
								}
							}
							$throw(t$);
						}
					} catch ($Throwable& var$1) {
						$assign(var$0, var$1);
					} /*finally*/ {
						if (fc != nullptr) {
							fc->close();
						}
					}
					if (var$0 != nullptr) {
						$throw(var$0);
					}
				}
			}
		} else {
			{
				$var($OutputStream, out, $AtomicAppend::newOutputStream(this->val$file));
				{
					$var($Throwable, var$2, nullptr);
					try {
						try {
							for (int32_t j = 0; j < 1000; ++j) {
								$nc(out)->write((int32_t)u'x');
							}
						} catch ($Throwable& t$) {
							if (out != nullptr) {
								try {
									out->close();
								} catch ($Throwable& x2) {
									t$->addSuppressed(x2);
								}
							}
							$throw(t$);
						}
					} catch ($Throwable& var$3) {
						$assign(var$2, var$3);
					} /*finally*/ {
						if (out != nullptr) {
							out->close();
						}
					}
					if (var$2 != nullptr) {
						$throw(var$2);
					}
				}
			}
		}
	} catch ($IOException& ioe) {
		ioe->printStackTrace();
	}
}

AtomicAppend$1::AtomicAppend$1() {
}

$Class* AtomicAppend$1::load$($String* name, bool initialize) {
	$loadClass(AtomicAppend$1, name, initialize, &_AtomicAppend$1_ClassInfo_, allocate$AtomicAppend$1);
	return class$;
}

$Class* AtomicAppend$1::class$ = nullptr;