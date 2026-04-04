#include <Bug6335238$DateFormatThread.h>
#include <Bug6335238.h>
#include <java/text/SimpleDateFormat.h>
#include <java/util/Date.h>
#include <jcpp.h>

using $Bug6335238 = ::Bug6335238;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $RuntimeException = ::java::lang::RuntimeException;
using $SimpleDateFormat = ::java::text::SimpleDateFormat;
using $Date = ::java::util::Date;

void Bug6335238$DateFormatThread::init$($Bug6335238* this$0) {
	$set(this, this$0, this$0);
	$Thread::init$();
}

void Bug6335238$DateFormatThread::run() {
	$useLocalObjectStack();
	int32_t i = 0;
	$init($Bug6335238);
	while (!$Bug6335238::stopped) {
		$var($SimpleDateFormat, sdf, nullptr);
		$synchronized($Bug6335238::masterSdf) {
			$assign(sdf, $cast($SimpleDateFormat, $Bug6335238::masterSdf->clone()));
		}
		++i;
		$var($String, s, $nc(sdf)->format($$new($Date, (int64_t)0x000000e2e6c7c260)));
		if (!$nc(s)->equals("2000/11/18 00:01:00"_s)) {
			$Bug6335238::stopped = true;
			$Bug6335238::err = true;
			$throwNew($RuntimeException, $$str({"Formatting Date Error: counter="_s, $$str(i), ", Got<"_s, s, "> != Expected<"_s, "2000/11/18 00:01:00"_s, ">"_s}));
		}
	}
}

Bug6335238$DateFormatThread::Bug6335238$DateFormatThread() {
}

$Class* Bug6335238$DateFormatThread::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"this$0", "LBug6335238;", nullptr, $FINAL | $SYNTHETIC, $field(Bug6335238$DateFormatThread, this$0)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(LBug6335238;)V", nullptr, 0, $method(Bug6335238$DateFormatThread, init$, void, $Bug6335238*)},
		{"run", "()V", nullptr, $PUBLIC, $virtualMethod(Bug6335238$DateFormatThread, run, void)},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"Bug6335238$DateFormatThread", "Bug6335238", "DateFormatThread", 0},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"Bug6335238$DateFormatThread",
		"java.lang.Thread",
		nullptr,
		fieldInfos$$,
		methodInfos$$,
		nullptr,
		nullptr,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		nullptr,
		"Bug6335238"
	};
	$loadClass(Bug6335238$DateFormatThread, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(Bug6335238$DateFormatThread);
	});
	return class$;
}

$Class* Bug6335238$DateFormatThread::class$ = nullptr;