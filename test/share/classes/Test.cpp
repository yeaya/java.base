#include <Test.h>

#include <jcpp.h>

using $PrintStream = ::java::io::PrintStream;
using $ClassInfo = ::java::lang::ClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

$MethodInfo _Test_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(Test, init$, void)},
	{"aa", "()I", nullptr, 0, $virtualMethod(Test, aa, int32_t)},
	{"aa2", "()I", nullptr, 0, $virtualMethod(Test, aa2, int32_t)},
	{"main", "([Ljava/lang/String;)V", nullptr, $PUBLIC | $STATIC | $TRANSIENT, $staticMethod(Test, main, void, $StringArray*)},
	{}
};

$ClassInfo _Test_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"Test",
	"java.lang.Object",
	nullptr,
	nullptr,
	_Test_MethodInfo_
};

$Object* allocate$Test($Class* clazz) {
	return $of($alloc(Test));
}

void Test::init$() {
}

void Test::main($StringArray* args) {
	$useLocalCurrentObjectStackCache();
	$nc($System::out)->println("hello"_s);
	int32_t i = 0;
	{
		$var($Throwable, var$0, nullptr);
		bool return$1 = false;
		try {
			try {
				i += 1;
				{
					$var($Throwable, var$2, nullptr);
					bool return$3 = false;
					try {
						try {
							if (i % 3 == 0) {
								i += 1;
								return$3 = true;
								goto $finally1;
							}
						} catch ($Throwable& t) {
						}
					} catch ($Throwable& var$4) {
						$assign(var$2, var$4);
					} $finally1: {
						i += 2;
					}
					if (var$2 != nullptr) {
						$throw(var$2);
					}
					if (return$3) {
						return$1 = true;
						goto $finally;
					}
				}
			} catch ($Throwable& t) {
			}
		} catch ($Throwable& var$5) {
			$assign(var$0, var$5);
		} $finally: {
			i += 2;
		}
		if (var$0 != nullptr) {
			$throw(var$0);
		}
		if (return$1) {
			return;
		}
	}
}

int32_t Test::aa() {
	$useLocalCurrentObjectStackCache();
	int32_t i = 0;
	{
		$var($Throwable, var$0, nullptr);
		int32_t var$2 = 0;
		bool return$1 = false;
		try {
			try {
				i += 1;
				{
					$var($Throwable, var$3, nullptr);
					int32_t var$5 = 0;
					bool return$4 = false;
					try {
						try {
							if (i % 3 == 0) {
								i += 1;
								var$5 = i;
								return$4 = true;
								goto $finally1;
							} else if (i % 5 == 0) {
								var$5 = 5 + 6;
								return$4 = true;
								goto $finally1;
							}
							i = i + 9;
						} catch ($Throwable& t) {
						}
					} catch ($Throwable& var$6) {
						$assign(var$3, var$6);
					} $finally1: {
						i += 2;
					}
					if (var$3 != nullptr) {
						$throw(var$3);
					}
					if (return$4) {
						var$2 = var$5;
						return$1 = true;
						goto $finally;
					}
				}
			} catch ($Throwable& t) {
			}
		} catch ($Throwable& var$7) {
			$assign(var$0, var$7);
		} $finally: {
			i += 2;
		}
		if (var$0 != nullptr) {
			$throw(var$0);
		}
		if (return$1) {
			return var$2;
		}
	}
	return i;
}

int32_t Test::aa2() {
	$useLocalCurrentObjectStackCache();
	int32_t i = 0;
	{
		$var($Throwable, var$0, nullptr);
		int32_t var$2 = 0;
		bool return$1 = false;
		try {
			i += 1;
			{
				$var($Throwable, var$3, nullptr);
				int32_t var$5 = 0;
				bool return$4 = false;
				try {
					if (i % 3 == 0) {
						i += 1;
						var$5 = i;
						return$4 = true;
						goto $finally1;
					} else {
						i = 5 + 6;
					}
				} catch ($Throwable& var$6) {
					$assign(var$3, var$6);
				} $finally1: {
					i += 2;
				}
				if (var$3 != nullptr) {
					$throw(var$3);
				}
				if (return$4) {
					var$2 = var$5;
					return$1 = true;
					goto $finally;
				}
			}
		} catch ($Throwable& var$7) {
			$assign(var$0, var$7);
		} $finally: {
			i += 2;
		}
		if (var$0 != nullptr) {
			$throw(var$0);
		}
		if (return$1) {
			return var$2;
		}
	}
	return i;
}

Test::Test() {
}

$Class* Test::load$($String* name, bool initialize) {
	$loadClass(Test, name, initialize, &_Test_ClassInfo_, allocate$Test);
	return class$;
}

$Class* Test::class$ = nullptr;