#include <p/App.h>

#include <java/io/FileInputStream.h>
#include <java/io/InputStream.h>
#include <java/io/PrintStream.h>
#include <java/lang/Array.h>
#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/Exception.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/NullPointerException.h>
#include <java/lang/SecurityException.h>
#include <java/lang/String.h>
#include <java/lang/StringBuilder.h>
#include <java/lang/System.h>
#include <java/lang/Throwable.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <jcpp.h>

using $FileInputStream = ::java::io::FileInputStream;
using $InputStream = ::java::io::InputStream;
using $PrintStream = ::java::io::PrintStream;
using $ClassInfo = ::java::lang::ClassInfo;
using $Exception = ::java::lang::Exception;
using $MethodInfo = ::java::lang::MethodInfo;
using $NullPointerException = ::java::lang::NullPointerException;
using $SecurityException = ::java::lang::SecurityException;

namespace p {

$MethodInfo _App_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(App::*)()>(&App::init$))},
	{"main", "([Ljava/lang/String;)V", nullptr, $PUBLIC | $STATIC, $method(static_cast<void(*)($StringArray*)>(&App::main)), "java.lang.Exception"},
	{}
};

$ClassInfo _App_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"p.App",
	"java.lang.Object",
	nullptr,
	nullptr,
	_App_MethodInfo_
};

$Object* allocate$App($Class* clazz) {
	return $of($alloc(App));
}

void App::init$() {
}

void App::main($StringArray* args) {
	$load(App);
	$beforeCallerSensitive();
	bool f = true;
	$var($StringBuilder, sb, $new($StringBuilder));
	$var($String, expected, nullptr);
	{
		$var($StringArray, arr$, args);
		int32_t len$ = $nc(arr$)->length;
		int32_t i$ = 0;
		for (; i$ < len$; ++i$) {
			$var($String, s, arr$->get(i$));
			{
				if (expected == nullptr) {
					$assign(expected, s);
				} else if ($nc(s)->equals("-"_s)) {
					f = false;
				} else if (f) {
					try {
						$var($InputStream, is, $new($FileInputStream, s));
						{
							$var($Throwable, var$0, nullptr);
							try {
								try {
									is->readAllBytes();
									sb->append(u'+');
								} catch ($Throwable&) {
									$var($Throwable, t$, $catch());
									try {
										is->close();
									} catch ($Throwable&) {
										$var($Throwable, x2, $catch());
										t$->addSuppressed(x2);
									}
									$throw(t$);
								}
							} catch ($Throwable&) {
								$assign(var$0, $catch());
							} /*finally*/ {
								is->close();
							}
							if (var$0 != nullptr) {
								$throw(var$0);
							}
						}
					} catch ($SecurityException&) {
						$var($SecurityException, se, $catch());
						$init($System);
						$nc($System::out)->println($of(se));
						sb->append(u'S');
					} catch ($Exception&) {
						$var($Exception, e, $catch());
						$init($System);
						$nc($System::out)->println($of(e));
						sb->append(u'-');
					}
				} else {
					try {
						$var($InputStream, is, App::class$->getResourceAsStream(s));
						{
							$var($Throwable, var$1, nullptr);
							try {
								try {
									$nc(is)->readAllBytes();
									sb->append(u'+');
								} catch ($Throwable&) {
									$var($Throwable, t$, $catch());
									if (is != nullptr) {
										try {
											is->close();
										} catch ($Throwable&) {
											$var($Throwable, x2, $catch());
											t$->addSuppressed(x2);
										}
									}
									$throw(t$);
								}
							} catch ($Throwable&) {
								$assign(var$1, $catch());
							} /*finally*/ {
								if (is != nullptr) {
									is->close();
								}
							}
							if (var$1 != nullptr) {
								$throw(var$1);
							}
						}
					} catch ($NullPointerException&) {
						$var($NullPointerException, npe, $catch());
						$init($System);
						$nc($System::out)->println($of(npe));
						sb->append(u'0');
					} catch ($Exception&) {
						$var($Exception, e, $catch());
						$init($System);
						$nc($System::out)->println($of(e));
						sb->append(u'-');
					}
				}
			}
		}
	}
	if (!$nc($(sb->toString()))->equals(expected)) {
		$throwNew($Exception, $$str({"Expected "_s, expected, ", actually "_s, sb}));
	} else {
		$init($System);
		$nc($System::out)->println("OK"_s);
	}
}

App::App() {
}

$Class* App::load$($String* name, bool initialize) {
	$loadClass(App, name, initialize, &_App_ClassInfo_, allocate$App);
	return class$;
}

$Class* App::class$ = nullptr;

} // p