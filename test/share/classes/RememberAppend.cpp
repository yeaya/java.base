#include <RememberAppend.h>

#include <java/io/File.h>
#include <java/io/FileDescriptor.h>
#include <java/io/FileOutputStream.h>
#include <jcpp.h>

using $File = ::java::io::File;
using $FileOutputStream = ::java::io::FileOutputStream;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $RuntimeException = ::java::lang::RuntimeException;

$FieldInfo _RememberAppend_FieldInfo_[] = {
	{"bytes", "[B", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(RememberAppend, bytes)},
	{}
};

$MethodInfo _RememberAppend_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(RememberAppend, init$, void)},
	{"main", "([Ljava/lang/String;)V", nullptr, $PUBLIC | $STATIC, $staticMethod(RememberAppend, main, void, $StringArray*), "java.lang.Throwable"},
	{}
};

$ClassInfo _RememberAppend_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"RememberAppend",
	"java.lang.Object",
	nullptr,
	_RememberAppend_FieldInfo_,
	_RememberAppend_MethodInfo_
};

$Object* allocate$RememberAppend($Class* clazz) {
	return $of($alloc(RememberAppend));
}

$bytes* RememberAppend::bytes = nullptr;

void RememberAppend::init$() {
}

void RememberAppend::main($StringArray* args) {
	$init(RememberAppend);
	$useLocalCurrentObjectStackCache();
	$var($File, f, $File::createTempFile("tmp.file"_s, nullptr));
	$nc(f)->deleteOnExit();
	{
		$var($FileOutputStream, fos1, $new($FileOutputStream, $(f->getPath()), true));
		{
			$var($Throwable, var$0, nullptr);
			try {
				try {
					fos1->write(RememberAppend::bytes);
				} catch ($Throwable& t$) {
					try {
						fos1->close();
					} catch ($Throwable& x2) {
						t$->addSuppressed(x2);
					}
					$throw(t$);
				}
			} catch ($Throwable& var$1) {
				$assign(var$0, var$1);
			} /*finally*/ {
				fos1->close();
			}
			if (var$0 != nullptr) {
				$throw(var$0);
			}
		}
	}
	{
		$var($FileOutputStream, fos1, $new($FileOutputStream, $(f->getPath()), true));
		{
			$var($Throwable, var$2, nullptr);
			try {
				try {
					$var($FileOutputStream, fos2, $new($FileOutputStream, $(fos1->getFD())));
					{
						$var($Throwable, var$3, nullptr);
						try {
							try {
								fos2->write(RememberAppend::bytes);
							} catch ($Throwable& t$) {
								try {
									fos2->close();
								} catch ($Throwable& x2) {
									t$->addSuppressed(x2);
								}
								$throw(t$);
							}
						} catch ($Throwable& var$4) {
							$assign(var$3, var$4);
						} /*finally*/ {
							fos2->close();
						}
						if (var$3 != nullptr) {
							$throw(var$3);
						}
					}
				} catch ($Throwable& t$) {
					try {
						fos1->close();
					} catch ($Throwable& x2) {
						t$->addSuppressed(x2);
					}
					$throw(t$);
				}
			} catch ($Throwable& var$5) {
				$assign(var$2, var$5);
			} /*finally*/ {
				fos1->close();
			}
			if (var$2 != nullptr) {
				$throw(var$2);
			}
		}
	}
	if (f->length() != 2 * $nc(RememberAppend::bytes)->length) {
		$throwNew($RuntimeException, "Append flag ignored"_s);
	}
}

void clinit$RememberAppend($Class* class$) {
	$assignStatic(RememberAppend::bytes, "ABC "_s->getBytes());
}

RememberAppend::RememberAppend() {
}

$Class* RememberAppend::load$($String* name, bool initialize) {
	$loadClass(RememberAppend, name, initialize, &_RememberAppend_ClassInfo_, clinit$RememberAppend, allocate$RememberAppend);
	return class$;
}

$Class* RememberAppend::class$ = nullptr;