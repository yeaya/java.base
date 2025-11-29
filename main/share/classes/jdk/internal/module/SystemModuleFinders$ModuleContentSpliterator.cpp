#include <jdk/internal/module/SystemModuleFinders$ModuleContentSpliterator.h>

#include <java/io/IOException.h>
#include <java/io/UncheckedIOException.h>
#include <java/lang/AssertionError.h>
#include <java/util/ArrayDeque.h>
#include <java/util/Collections.h>
#include <java/util/Deque.h>
#include <java/util/Iterator.h>
#include <java/util/List.h>
#include <java/util/Spliterator.h>
#include <java/util/function/Consumer.h>
#include <jdk/internal/jimage/ImageReader$Node.h>
#include <jdk/internal/jimage/ImageReader.h>
#include <jdk/internal/module/SystemModuleFinders$SystemImage.h>
#include <jdk/internal/module/SystemModuleFinders.h>
#include <jcpp.h>

#undef DISTINCT
#undef IMMUTABLE
#undef MAX_VALUE
#undef NONNULL

using $IOException = ::java::io::IOException;
using $UncheckedIOException = ::java::io::UncheckedIOException;
using $AssertionError = ::java::lang::AssertionError;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $Long = ::java::lang::Long;
using $MethodInfo = ::java::lang::MethodInfo;
using $ArrayDeque = ::java::util::ArrayDeque;
using $Collections = ::java::util::Collections;
using $Deque = ::java::util::Deque;
using $Iterator = ::java::util::Iterator;
using $List = ::java::util::List;
using $Spliterator = ::java::util::Spliterator;
using $Consumer = ::java::util::function::Consumer;
using $ImageReader = ::jdk::internal::jimage::ImageReader;
using $ImageReader$Node = ::jdk::internal::jimage::ImageReader$Node;
using $SystemModuleFinders = ::jdk::internal::module::SystemModuleFinders;
using $SystemModuleFinders$SystemImage = ::jdk::internal::module::SystemModuleFinders$SystemImage;

namespace jdk {
	namespace internal {
		namespace module {

$FieldInfo _SystemModuleFinders$ModuleContentSpliterator_FieldInfo_[] = {
	{"$assertionsDisabled", "Z", nullptr, $STATIC | $FINAL | $SYNTHETIC, $staticField(SystemModuleFinders$ModuleContentSpliterator, $assertionsDisabled)},
	{"moduleRoot", "Ljava/lang/String;", nullptr, $FINAL, $field(SystemModuleFinders$ModuleContentSpliterator, moduleRoot)},
	{"stack", "Ljava/util/Deque;", "Ljava/util/Deque<Ljdk/internal/jimage/ImageReader$Node;>;", $FINAL, $field(SystemModuleFinders$ModuleContentSpliterator, stack)},
	{"iterator", "Ljava/util/Iterator;", "Ljava/util/Iterator<Ljdk/internal/jimage/ImageReader$Node;>;", 0, $field(SystemModuleFinders$ModuleContentSpliterator, iterator)},
	{}
};

$MethodInfo _SystemModuleFinders$ModuleContentSpliterator_MethodInfo_[] = {
	{"<init>", "(Ljava/lang/String;)V", nullptr, 0, $method(static_cast<void(SystemModuleFinders$ModuleContentSpliterator::*)($String*)>(&SystemModuleFinders$ModuleContentSpliterator::init$)), "java.io.IOException"},
	{"characteristics", "()I", nullptr, $PUBLIC},
	{"estimateSize", "()J", nullptr, $PUBLIC},
	{"next", "()Ljava/lang/String;", nullptr, $PRIVATE, $method(static_cast<$String*(SystemModuleFinders$ModuleContentSpliterator::*)()>(&SystemModuleFinders$ModuleContentSpliterator::next)), "java.io.IOException"},
	{"tryAdvance", "(Ljava/util/function/Consumer;)Z", "(Ljava/util/function/Consumer<-Ljava/lang/String;>;)Z", $PUBLIC},
	{"trySplit", "()Ljava/util/Spliterator;", "()Ljava/util/Spliterator<Ljava/lang/String;>;", $PUBLIC},
	{}
};

$InnerClassInfo _SystemModuleFinders$ModuleContentSpliterator_InnerClassesInfo_[] = {
	{"jdk.internal.module.SystemModuleFinders$ModuleContentSpliterator", "jdk.internal.module.SystemModuleFinders", "ModuleContentSpliterator", $PRIVATE | $STATIC},
	{}
};

$ClassInfo _SystemModuleFinders$ModuleContentSpliterator_ClassInfo_ = {
	$ACC_SUPER,
	"jdk.internal.module.SystemModuleFinders$ModuleContentSpliterator",
	"java.lang.Object",
	"java.util.Spliterator",
	_SystemModuleFinders$ModuleContentSpliterator_FieldInfo_,
	_SystemModuleFinders$ModuleContentSpliterator_MethodInfo_,
	"Ljava/lang/Object;Ljava/util/Spliterator<Ljava/lang/String;>;",
	nullptr,
	_SystemModuleFinders$ModuleContentSpliterator_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"jdk.internal.module.SystemModuleFinders"
};

$Object* allocate$SystemModuleFinders$ModuleContentSpliterator($Class* clazz) {
	return $of($alloc(SystemModuleFinders$ModuleContentSpliterator));
}

bool SystemModuleFinders$ModuleContentSpliterator::$assertionsDisabled = false;

void SystemModuleFinders$ModuleContentSpliterator::init$($String* module) {
	$useLocalCurrentObjectStackCache();
	$set(this, moduleRoot, $str({"/modules/"_s, module}));
	$set(this, stack, $new($ArrayDeque));
	$var($ImageReader$Node, dir, $nc($($SystemModuleFinders$SystemImage::reader()))->findNode(this->moduleRoot));
	if (dir == nullptr || !$nc(dir)->isDirectory()) {
		$throwNew($IOException, $$str({this->moduleRoot, " not a directory"_s}));
	}
	$nc(this->stack)->push(dir);
	$set(this, iterator, $Collections::emptyIterator());
}

$String* SystemModuleFinders$ModuleContentSpliterator::next() {
	$useLocalCurrentObjectStackCache();
	for (;;) {
		while ($nc(this->iterator)->hasNext()) {
			$var($ImageReader$Node, node, $cast($ImageReader$Node, $nc(this->iterator)->next()));
			$var($String, name, $nc(node)->getName());
			if (node->isDirectory()) {
				$var($ImageReader$Node, dir, $nc($($SystemModuleFinders$SystemImage::reader()))->findNode(name));
				if (!SystemModuleFinders$ModuleContentSpliterator::$assertionsDisabled && !$nc(dir)->isDirectory()) {
					$throwNew($AssertionError);
				}
				$nc(this->stack)->push(dir);
			} else {
				return $nc(name)->substring($nc(this->moduleRoot)->length() + 1);
			}
		}
		if ($nc(this->stack)->isEmpty()) {
			return nullptr;
		} else {
			$var($ImageReader$Node, dir, $cast($ImageReader$Node, $nc(this->stack)->poll()));
			if (!SystemModuleFinders$ModuleContentSpliterator::$assertionsDisabled && !$nc(dir)->isDirectory()) {
				$throwNew($AssertionError);
			}
			$set(this, iterator, $nc($($nc(dir)->getChildren()))->iterator());
		}
	}
}

bool SystemModuleFinders$ModuleContentSpliterator::tryAdvance($Consumer* action) {
	$var($String, next, nullptr);
	try {
		$assign(next, this->next());
	} catch ($IOException& ioe) {
		$throwNew($UncheckedIOException, ioe);
	}
	if (next != nullptr) {
		$nc(action)->accept(next);
		return true;
	} else {
		return false;
	}
}

$Spliterator* SystemModuleFinders$ModuleContentSpliterator::trySplit() {
	return nullptr;
}

int32_t SystemModuleFinders$ModuleContentSpliterator::characteristics() {
	return $Spliterator::DISTINCT + $Spliterator::NONNULL + $Spliterator::IMMUTABLE;
}

int64_t SystemModuleFinders$ModuleContentSpliterator::estimateSize() {
	return $Long::MAX_VALUE;
}

void clinit$SystemModuleFinders$ModuleContentSpliterator($Class* class$) {
	$load($SystemModuleFinders);
	SystemModuleFinders$ModuleContentSpliterator::$assertionsDisabled = !$SystemModuleFinders::class$->desiredAssertionStatus();
}

SystemModuleFinders$ModuleContentSpliterator::SystemModuleFinders$ModuleContentSpliterator() {
}

$Class* SystemModuleFinders$ModuleContentSpliterator::load$($String* name, bool initialize) {
	$loadClass(SystemModuleFinders$ModuleContentSpliterator, name, initialize, &_SystemModuleFinders$ModuleContentSpliterator_ClassInfo_, clinit$SystemModuleFinders$ModuleContentSpliterator, allocate$SystemModuleFinders$ModuleContentSpliterator);
	return class$;
}

$Class* SystemModuleFinders$ModuleContentSpliterator::class$ = nullptr;

		} // module
	} // internal
} // jdk