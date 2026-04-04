#include <p/App.h>
#include <java/io/FileInputStream.h>
#include <java/io/InputStream.h>
#include <java/lang/SecurityException.h>
#include <jcpp.h>

using $FileInputStream = ::java::io::FileInputStream;
using $InputStream = ::java::io::InputStream;
using $ClassInfo = ::java::lang::ClassInfo;
using $Exception = ::java::lang::Exception;
using $MethodInfo = ::java::lang::MethodInfo;
using $NullPointerException = ::java::lang::NullPointerException;
using $SecurityException = ::java::lang::SecurityException;

namespace p {

void App::init$() {
}

void App::main($StringArray* args) {
	$useLocalObjectStack();
	$load(App);
	$beforeCallerSensitive();
	bool f = true;
	$var($StringBuilder, sb, $new($StringBuilder));
	$var($String, expected, nullptr);
	{
		$var($StringArray, arr$, args);
		for (int32_t len$ = $nc(arr$)->length, i$ = 0; i$ < len$; ++i$) {
			$var($String, s, arr$->get(i$));
			if (expected == nullptr) {
				$assign(expected, s);
			} else if ($nc(s)->equals("-"_s)) {
				f = false;
			} else if (f) {
				try {
					$var($InputStream, is, $new($FileInputStream, s));
					$var($Throwable, var$0, nullptr);
					try {
						try {
							is->readAllBytes();
							sb->append(u'+');
						} catch ($Throwable& t$) {
							try {
								is->close();
							} catch ($Throwable& x2) {
								t$->addSuppressed(x2);
							}
							$throw(t$);
						}
					} catch ($Throwable& var$1) {
						$assign(var$0, var$1);
					} /*finally*/ {
						is->close();
					}
					if (var$0 != nullptr) {
						$throw(var$0);
					}
				} catch ($SecurityException& se) {
					$nc($System::out)->println($of(se));
					sb->append(u'S');
				} catch ($Exception& e) {
					$nc($System::out)->println($of(e));
					sb->append(u'-');
				}
			} else {
				try {
					$var($InputStream, is, App::class$->getResourceAsStream(s));
					$var($Throwable, var$2, nullptr);
					try {
						try {
							$nc(is)->readAllBytes();
							sb->append(u'+');
						} catch ($Throwable& t$) {
							if (is != nullptr) {
								try {
									is->close();
								} catch ($Throwable& x2) {
									t$->addSuppressed(x2);
								}
							}
							$throw(t$);
						}
					} catch ($Throwable& var$3) {
						$assign(var$2, var$3);
					} /*finally*/ {
						if (is != nullptr) {
							is->close();
						}
					}
					if (var$2 != nullptr) {
						$throw(var$2);
					}
				} catch ($NullPointerException& npe) {
					$nc($System::out)->println($of(npe));
					sb->append(u'0');
				} catch ($Exception& e) {
					$nc($System::out)->println($of(e));
					sb->append(u'-');
				}
			}
		}
	}
	if (!$(sb->toString())->equals(expected)) {
		$throwNew($Exception, $$str({"Expected "_s, expected, ", actually "_s, sb}));
	} else {
		$nc($System::out)->println("OK"_s);
	}
}

App::App() {
}

$Class* App::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, $PUBLIC, $method(App, init$, void)},
		{"main", "([Ljava/lang/String;)V", nullptr, $PUBLIC | $STATIC, $staticMethod(App, main, void, $StringArray*), "java.lang.Exception"},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $ACC_SUPER,
		"p.App",
		"java.lang.Object",
		nullptr,
		nullptr,
		methodInfos$$
	};
	$loadClass(App, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(App);
	});
	return class$;
}

$Class* App::class$ = nullptr;

} // p