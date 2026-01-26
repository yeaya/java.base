#include <jdk/internal/jimage/RuntimeImageReader.h>

#include <java/io/IOException.h>
#include <java/io/Serializable.h>
#include <java/lang/AssertionError.h>
#include <java/lang/IllegalStateException.h>
#include <java/lang/invoke/CallSite.h>
#include <java/lang/invoke/LambdaMetafactory.h>
#include <java/lang/invoke/MethodHandle.h>
#include <java/lang/invoke/MethodHandles$Lookup.h>
#include <java/lang/invoke/MethodType.h>
#include <java/nio/file/attribute/BasicFileAttributes.h>
#include <java/util/HashMap.h>
#include <java/util/Iterator.h>
#include <java/util/List.h>
#include <java/util/function/Function.h>
#include <java/util/function/IntFunction.h>
#include <java/util/stream/Stream.h>
#include <jdk/internal/jimage/ImageReader$Directory.h>
#include <jdk/internal/jimage/ImageReader$LinkNode.h>
#include <jdk/internal/jimage/ImageReader$Node.h>
#include <jdk/internal/jimage/RuntimeFileAttributes.h>
#include <jdk/internal/jimage/RuntimeImageLocation.h>
#include <jdk/internal/jimage/RuntimeImageReader$LocationVisitor.h>
#include <jdk/internal/jimage/RuntimeImageReader$Resource.h>
#include <jcpp.h>

#include <java/lang/Machine.h>

using Machine = ::java::lang::Machine;

using $IOException = ::java::io::IOException;
using $Serializable = ::java::io::Serializable;
using $AssertionError = ::java::lang::AssertionError;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $IllegalStateException = ::java::lang::IllegalStateException;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $MethodHandle = ::java::lang::invoke::MethodHandle;
using $BasicFileAttributes = ::java::nio::file::attribute::BasicFileAttributes;
using $HashMap = ::java::util::HashMap;
using $Iterator = ::java::util::Iterator;
using $List = ::java::util::List;
using $Function = ::java::util::function::Function;
using $IntFunction = ::java::util::function::IntFunction;
using $Stream = ::java::util::stream::Stream;
using $ImageReader$Directory = ::jdk::internal::jimage::ImageReader$Directory;
using $ImageReader$LinkNode = ::jdk::internal::jimage::ImageReader$LinkNode;
using $ImageReader$Node = ::jdk::internal::jimage::ImageReader$Node;
using $RuntimeFileAttributes = ::jdk::internal::jimage::RuntimeFileAttributes;
using $RuntimeImageLocation = ::jdk::internal::jimage::RuntimeImageLocation;
using $RuntimeImageReader$LocationVisitor = ::jdk::internal::jimage::RuntimeImageReader$LocationVisitor;
using $RuntimeImageReader$Resource = ::jdk::internal::jimage::RuntimeImageReader$Resource;

namespace jdk {
	namespace internal {
		namespace jimage {

class RuntimeImageReader$$Lambda$getNameString : public $Function {
	$class(RuntimeImageReader$$Lambda$getNameString, $NO_CLASS_INIT, $Function)
public:
	void init$() {
	}
	virtual $Object* apply(Object$* inst$) override {
		 return $of($sure($ImageReader$Node, inst$)->getNameString());
	}
	static $Object* allocate$($Class* clazz) {
		return $of($alloc<RuntimeImageReader$$Lambda$getNameString>());
	}
	static $MethodInfo methodInfos[3];
	static $ClassInfo classInfo$;
};
$MethodInfo RuntimeImageReader$$Lambda$getNameString::methodInfos[3] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(RuntimeImageReader$$Lambda$getNameString, init$, void)},
	{"apply", "(Ljava/lang/Object;)Ljava/lang/Object;", nullptr, $PUBLIC, $virtualMethod(RuntimeImageReader$$Lambda$getNameString, apply, $Object*, Object$*)},
	{}
};
$ClassInfo RuntimeImageReader$$Lambda$getNameString::classInfo$ = {
	$PUBLIC | $FINAL,
	"jdk.internal.jimage.RuntimeImageReader$$Lambda$getNameString",
	"java.lang.Object",
	"java.util.function.Function",
	nullptr,
	methodInfos
};
$Class* RuntimeImageReader$$Lambda$getNameString::load$($String* name, bool initialize) {
	$loadClass(RuntimeImageReader$$Lambda$getNameString, name, initialize, &classInfo$, allocate$);
	return class$;
}
$Class* RuntimeImageReader$$Lambda$getNameString::class$ = nullptr;

class RuntimeImageReader$$Lambda$lambda$getModuleNames$0$1 : public $Function {
	$class(RuntimeImageReader$$Lambda$lambda$getModuleNames$0$1, $NO_CLASS_INIT, $Function)
public:
	void init$(int32_t off) {
		this->off = off;
	}
	virtual $Object* apply(Object$* s) override {
		 return $of(RuntimeImageReader::lambda$getModuleNames$0(off, $cast($String, s)));
	}
	static $Object* allocate$($Class* clazz) {
		return $of($alloc<RuntimeImageReader$$Lambda$lambda$getModuleNames$0$1>());
	}
	int32_t off = 0;
	static $FieldInfo fieldInfos[2];
	static $MethodInfo methodInfos[3];
	static $ClassInfo classInfo$;
};
$FieldInfo RuntimeImageReader$$Lambda$lambda$getModuleNames$0$1::fieldInfos[2] = {
	{"off", "I", nullptr, $PUBLIC, $field(RuntimeImageReader$$Lambda$lambda$getModuleNames$0$1, off)},
	{}
};
$MethodInfo RuntimeImageReader$$Lambda$lambda$getModuleNames$0$1::methodInfos[3] = {
	{"<init>", "(I)V", nullptr, $PUBLIC, $method(RuntimeImageReader$$Lambda$lambda$getModuleNames$0$1, init$, void, int32_t)},
	{"apply", "(Ljava/lang/Object;)Ljava/lang/Object;", nullptr, $PUBLIC, $virtualMethod(RuntimeImageReader$$Lambda$lambda$getModuleNames$0$1, apply, $Object*, Object$*)},
	{}
};
$ClassInfo RuntimeImageReader$$Lambda$lambda$getModuleNames$0$1::classInfo$ = {
	$PUBLIC | $FINAL,
	"jdk.internal.jimage.RuntimeImageReader$$Lambda$lambda$getModuleNames$0$1",
	"java.lang.Object",
	"java.util.function.Function",
	fieldInfos,
	methodInfos
};
$Class* RuntimeImageReader$$Lambda$lambda$getModuleNames$0$1::load$($String* name, bool initialize) {
	$loadClass(RuntimeImageReader$$Lambda$lambda$getModuleNames$0$1, name, initialize, &classInfo$, allocate$);
	return class$;
}
$Class* RuntimeImageReader$$Lambda$lambda$getModuleNames$0$1::class$ = nullptr;

class RuntimeImageReader$$Lambda$lambda$getModuleNames$1$2 : public $IntFunction {
	$class(RuntimeImageReader$$Lambda$lambda$getModuleNames$1$2, $NO_CLASS_INIT, $IntFunction)
public:
	void init$() {
	}
	virtual $Object* apply(int32_t x$0) override {
		 return $of(RuntimeImageReader::lambda$getModuleNames$1(x$0));
	}
	static $Object* allocate$($Class* clazz) {
		return $of($alloc<RuntimeImageReader$$Lambda$lambda$getModuleNames$1$2>());
	}
	static $MethodInfo methodInfos[3];
	static $ClassInfo classInfo$;
};
$MethodInfo RuntimeImageReader$$Lambda$lambda$getModuleNames$1$2::methodInfos[3] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(RuntimeImageReader$$Lambda$lambda$getModuleNames$1$2, init$, void)},
	{"apply", "(I)Ljava/lang/Object;", nullptr, $PUBLIC, $virtualMethod(RuntimeImageReader$$Lambda$lambda$getModuleNames$1$2, apply, $Object*, int32_t)},
	{}
};
$ClassInfo RuntimeImageReader$$Lambda$lambda$getModuleNames$1$2::classInfo$ = {
	$PUBLIC | $FINAL,
	"jdk.internal.jimage.RuntimeImageReader$$Lambda$lambda$getModuleNames$1$2",
	"java.lang.Object",
	"java.util.function.IntFunction",
	nullptr,
	methodInfos
};
$Class* RuntimeImageReader$$Lambda$lambda$getModuleNames$1$2::load$($String* name, bool initialize) {
	$loadClass(RuntimeImageReader$$Lambda$lambda$getModuleNames$1$2, name, initialize, &classInfo$, allocate$);
	return class$;
}
$Class* RuntimeImageReader$$Lambda$lambda$getModuleNames$1$2::class$ = nullptr;

class RuntimeImageReader$$Lambda$lambda$handlePackages$2$3 : public $RuntimeImageReader$LocationVisitor {
	$class(RuntimeImageReader$$Lambda$lambda$handlePackages$2$3, $NO_CLASS_INIT, $RuntimeImageReader$LocationVisitor)
public:
	void init$(RuntimeImageReader* inst) {
		$set(this, inst$, inst);
	}
	virtual void visit($RuntimeImageLocation* childloc) override {
		$nc(inst$)->lambda$handlePackages$2(childloc);
	}
	static $Object* allocate$($Class* clazz) {
		return $of($alloc<RuntimeImageReader$$Lambda$lambda$handlePackages$2$3>());
	}
	RuntimeImageReader* inst$ = nullptr;
	static $FieldInfo fieldInfos[2];
	static $MethodInfo methodInfos[3];
	static $ClassInfo classInfo$;
};
$FieldInfo RuntimeImageReader$$Lambda$lambda$handlePackages$2$3::fieldInfos[2] = {
	{"inst$", "Ljava/lang/Object;", nullptr, $PUBLIC, $field(RuntimeImageReader$$Lambda$lambda$handlePackages$2$3, inst$)},
	{}
};
$MethodInfo RuntimeImageReader$$Lambda$lambda$handlePackages$2$3::methodInfos[3] = {
	{"<init>", "(Ljdk/internal/jimage/RuntimeImageReader;)V", nullptr, $PUBLIC, $method(RuntimeImageReader$$Lambda$lambda$handlePackages$2$3, init$, void, RuntimeImageReader*)},
	{"visit", "(Ljdk/internal/jimage/RuntimeImageLocation;)V", nullptr, $PUBLIC, $virtualMethod(RuntimeImageReader$$Lambda$lambda$handlePackages$2$3, visit, void, $RuntimeImageLocation*)},
	{}
};
$ClassInfo RuntimeImageReader$$Lambda$lambda$handlePackages$2$3::classInfo$ = {
	$PUBLIC | $FINAL,
	"jdk.internal.jimage.RuntimeImageReader$$Lambda$lambda$handlePackages$2$3",
	"java.lang.Object",
	"jdk.internal.jimage.RuntimeImageReader$LocationVisitor",
	fieldInfos,
	methodInfos
};
$Class* RuntimeImageReader$$Lambda$lambda$handlePackages$2$3::load$($String* name, bool initialize) {
	$loadClass(RuntimeImageReader$$Lambda$lambda$handlePackages$2$3, name, initialize, &classInfo$, allocate$);
	return class$;
}
$Class* RuntimeImageReader$$Lambda$lambda$handlePackages$2$3::class$ = nullptr;

class RuntimeImageReader$$Lambda$lambda$handleModulesSubTree$3$4 : public $RuntimeImageReader$LocationVisitor {
	$class(RuntimeImageReader$$Lambda$lambda$handleModulesSubTree$3$4, $NO_CLASS_INIT, $RuntimeImageReader$LocationVisitor)
public:
	void init$(RuntimeImageReader* inst, $ImageReader$Directory* dir) {
		$set(this, inst$, inst);
		$set(this, dir, dir);
	}
	virtual void visit($RuntimeImageLocation* childloc) override {
		$nc(inst$)->lambda$handleModulesSubTree$3(dir, childloc);
	}
	static $Object* allocate$($Class* clazz) {
		return $of($alloc<RuntimeImageReader$$Lambda$lambda$handleModulesSubTree$3$4>());
	}
	RuntimeImageReader* inst$ = nullptr;
	$ImageReader$Directory* dir = nullptr;
	static $FieldInfo fieldInfos[3];
	static $MethodInfo methodInfos[3];
	static $ClassInfo classInfo$;
};
$FieldInfo RuntimeImageReader$$Lambda$lambda$handleModulesSubTree$3$4::fieldInfos[3] = {
	{"inst$", "Ljava/lang/Object;", nullptr, $PUBLIC, $field(RuntimeImageReader$$Lambda$lambda$handleModulesSubTree$3$4, inst$)},
	{"dir", "Ljdk/internal/jimage/ImageReader$Directory;", nullptr, $PUBLIC, $field(RuntimeImageReader$$Lambda$lambda$handleModulesSubTree$3$4, dir)},
	{}
};
$MethodInfo RuntimeImageReader$$Lambda$lambda$handleModulesSubTree$3$4::methodInfos[3] = {
	{"<init>", "(Ljdk/internal/jimage/RuntimeImageReader;Ljdk/internal/jimage/ImageReader$Directory;)V", nullptr, $PUBLIC, $method(RuntimeImageReader$$Lambda$lambda$handleModulesSubTree$3$4, init$, void, RuntimeImageReader*, $ImageReader$Directory*)},
	{"visit", "(Ljdk/internal/jimage/RuntimeImageLocation;)V", nullptr, $PUBLIC, $virtualMethod(RuntimeImageReader$$Lambda$lambda$handleModulesSubTree$3$4, visit, void, $RuntimeImageLocation*)},
	{}
};
$ClassInfo RuntimeImageReader$$Lambda$lambda$handleModulesSubTree$3$4::classInfo$ = {
	$PUBLIC | $FINAL,
	"jdk.internal.jimage.RuntimeImageReader$$Lambda$lambda$handleModulesSubTree$3$4",
	"java.lang.Object",
	"jdk.internal.jimage.RuntimeImageReader$LocationVisitor",
	fieldInfos,
	methodInfos
};
$Class* RuntimeImageReader$$Lambda$lambda$handleModulesSubTree$3$4::load$($String* name, bool initialize) {
	$loadClass(RuntimeImageReader$$Lambda$lambda$handleModulesSubTree$3$4, name, initialize, &classInfo$, allocate$);
	return class$;
}
$Class* RuntimeImageReader$$Lambda$lambda$handleModulesSubTree$3$4::class$ = nullptr;

$FieldInfo _RuntimeImageReader_FieldInfo_[] = {
	{"$assertionsDisabled", "Z", nullptr, $STATIC | $FINAL | $SYNTHETIC, $staticField(RuntimeImageReader, $assertionsDisabled)},
	{"imageFileAttributes", "Ljava/nio/file/attribute/BasicFileAttributes;", nullptr, 0, $field(RuntimeImageReader, imageFileAttributes$)},
	{"nodes", "Ljava/util/HashMap;", "Ljava/util/HashMap<Ljava/lang/String;Ljdk/internal/jimage/ImageReader$Node;>;", $FINAL, $field(RuntimeImageReader, nodes)},
	{"rootDir", "Ljdk/internal/jimage/ImageReader$Directory;", nullptr, $VOLATILE, $field(RuntimeImageReader, rootDir)},
	{"packagesDir", "Ljdk/internal/jimage/ImageReader$Directory;", nullptr, 0, $field(RuntimeImageReader, packagesDir)},
	{"modulesDir", "Ljdk/internal/jimage/ImageReader$Directory;", nullptr, 0, $field(RuntimeImageReader, modulesDir)},
	{"closed", "Z", nullptr, $PRIVATE | $VOLATILE, $field(RuntimeImageReader, closed)},
	{}
};

$MethodInfo _RuntimeImageReader_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PRIVATE, $method(RuntimeImageReader, init$, void)},
	{"buildNode", "(Ljava/lang/String;)Ljdk/internal/jimage/ImageReader$Node;", nullptr, $SYNCHRONIZED, $method(RuntimeImageReader, buildNode, $ImageReader$Node*, $String*)},
	{"buildRootDirectory", "()Ljdk/internal/jimage/ImageReader$Directory;", nullptr, $SYNCHRONIZED, $method(RuntimeImageReader, buildRootDirectory, $ImageReader$Directory*)},
	{"close", "()V", nullptr, $PUBLIC, $virtualMethod(RuntimeImageReader, close, void), "java.io.IOException"},
	{"ensureOpen", "()V", nullptr, $PRIVATE, $method(RuntimeImageReader, ensureOpen, void), "java.io.IOException"},
	{"findLocation", "(Ljava/lang/String;Ljava/lang/String;)Ljdk/internal/jimage/RuntimeImageLocation;", nullptr, $PUBLIC, $method(RuntimeImageReader, findLocation, $RuntimeImageLocation*, $String*, $String*)},
	{"findLocation", "(Ljava/lang/String;)Ljdk/internal/jimage/RuntimeImageLocation;", nullptr, $PUBLIC, $method(RuntimeImageReader, findLocation, $RuntimeImageLocation*, $String*)},
	{"findLocation0", "(Ljava/lang/String;Ljava/lang/String;)Ljdk/internal/jimage/RuntimeImageLocation;", nullptr, $PUBLIC | $NATIVE, $method(RuntimeImageReader, findLocation0, $RuntimeImageLocation*, $String*, $String*)},
	{"findLocation0", "(Ljava/lang/String;)Ljdk/internal/jimage/RuntimeImageLocation;", nullptr, $PUBLIC | $NATIVE, $method(RuntimeImageReader, findLocation0, $RuntimeImageLocation*, $String*)},
	{"findNode", "(Ljava/lang/String;)Ljdk/internal/jimage/ImageReader$Node;", nullptr, $PUBLIC, $method(RuntimeImageReader, findNode, $ImageReader$Node*, $String*), "java.io.IOException"},
	{"findNode0", "(Ljava/lang/String;)Ljdk/internal/jimage/ImageReader$Node;", nullptr, $SYNCHRONIZED, $method(RuntimeImageReader, findNode0, $ImageReader$Node*, $String*)},
	{"getBaseExt", "(Ljdk/internal/jimage/RuntimeImageLocation;)Ljava/lang/String;", nullptr, 0, $method(RuntimeImageReader, getBaseExt, $String*, $RuntimeImageLocation*)},
	{"getModuleNames", "()[Ljava/lang/String;", nullptr, $PUBLIC, $method(RuntimeImageReader, getModuleNames, $StringArray*)},
	{"getResource", "(Ljdk/internal/jimage/ImageReader$Node;)[B", nullptr, $PUBLIC, $method(RuntimeImageReader, getResource, $bytes*, $ImageReader$Node*), "java.io.IOException"},
	{"getResource", "(Ljdk/internal/jimage/RuntimeImageReader$Resource;)[B", nullptr, $PUBLIC, $method(RuntimeImageReader, getResource, $bytes*, $RuntimeImageReader$Resource*), "java.io.IOException"},
	{"getResource0", "(Ljdk/internal/jimage/RuntimeImageReader$Resource;)[B", nullptr, $PUBLIC | $NATIVE, $method(RuntimeImageReader, getResource0, $bytes*, $RuntimeImageReader$Resource*), "java.io.IOException"},
	{"getRootDirectory", "()Ljdk/internal/jimage/ImageReader$Directory;", nullptr, $PUBLIC, $method(RuntimeImageReader, getRootDirectory, $ImageReader$Directory*), "java.io.IOException"},
	{"handleModuleLink", "(Ljava/lang/String;)Ljdk/internal/jimage/ImageReader$Node;", nullptr, 0, $method(RuntimeImageReader, handleModuleLink, $ImageReader$Node*, $String*)},
	{"handleModulesSubTree", "(Ljava/lang/String;Ljdk/internal/jimage/RuntimeImageLocation;)Ljdk/internal/jimage/ImageReader$Node;", nullptr, 0, $method(RuntimeImageReader, handleModulesSubTree, $ImageReader$Node*, $String*, $RuntimeImageLocation*)},
	{"handlePackages", "(Ljava/lang/String;Ljdk/internal/jimage/RuntimeImageLocation;)Ljdk/internal/jimage/ImageReader$Node;", nullptr, 0, $method(RuntimeImageReader, handlePackages, $ImageReader$Node*, $String*, $RuntimeImageLocation*)},
	{"handleResource", "(Ljava/lang/String;)Ljdk/internal/jimage/ImageReader$Node;", nullptr, 0, $method(RuntimeImageReader, handleResource, $ImageReader$Node*, $String*)},
	{"imageFileAttributes", "()Ljava/nio/file/attribute/BasicFileAttributes;", nullptr, 0, $method(RuntimeImageReader, imageFileAttributes, $BasicFileAttributes*)},
	{"lambda$getModuleNames$0", "(ILjava/lang/String;)Ljava/lang/String;", nullptr, $PRIVATE | $STATIC | $SYNTHETIC, $staticMethod(RuntimeImageReader, lambda$getModuleNames$0, $String*, int32_t, $String*)},
	{"lambda$getModuleNames$1", "(I)[Ljava/lang/String;", nullptr, $PRIVATE | $STATIC | $SYNTHETIC, $staticMethod(RuntimeImageReader, lambda$getModuleNames$1, $StringArray*, int32_t)},
	{"lambda$handleModulesSubTree$3", "(Ljdk/internal/jimage/ImageReader$Directory;Ljdk/internal/jimage/RuntimeImageLocation;)V", nullptr, $PRIVATE | $SYNTHETIC, $method(RuntimeImageReader, lambda$handleModulesSubTree$3, void, $ImageReader$Directory*, $RuntimeImageLocation*)},
	{"lambda$handlePackages$2", "(Ljdk/internal/jimage/RuntimeImageLocation;)V", nullptr, $PRIVATE | $SYNTHETIC, $method(RuntimeImageReader, lambda$handlePackages$2, void, $RuntimeImageLocation*)},
	{"makeDirectories", "(Ljava/lang/String;)Ljdk/internal/jimage/ImageReader$Directory;", nullptr, 0, $method(RuntimeImageReader, makeDirectories, $ImageReader$Directory*, $String*)},
	{"makeDirectory", "(Ljava/lang/String;Ljdk/internal/jimage/ImageReader$Directory;)Ljdk/internal/jimage/ImageReader$Directory;", nullptr, 0, $method(RuntimeImageReader, makeDirectory, $ImageReader$Directory*, $String*, $ImageReader$Directory*)},
	{"newDirectory", "(Ljdk/internal/jimage/ImageReader$Directory;Ljava/lang/String;)Ljdk/internal/jimage/ImageReader$Directory;", nullptr, 0, $method(RuntimeImageReader, newDirectory, $ImageReader$Directory*, $ImageReader$Directory*, $String*)},
	{"newLinkNode", "(Ljdk/internal/jimage/ImageReader$Directory;Ljava/lang/String;Ljdk/internal/jimage/ImageReader$Node;)Ljdk/internal/jimage/ImageReader$LinkNode;", nullptr, 0, $method(RuntimeImageReader, newLinkNode, $ImageReader$LinkNode*, $ImageReader$Directory*, $String*, $ImageReader$Node*)},
	{"newResource", "(Ljdk/internal/jimage/ImageReader$Directory;Ljdk/internal/jimage/RuntimeImageLocation;)Ljdk/internal/jimage/RuntimeImageReader$Resource;", nullptr, 0, $method(RuntimeImageReader, newResource, $RuntimeImageReader$Resource*, $ImageReader$Directory*, $RuntimeImageLocation*)},
	{"open", "()Ljdk/internal/jimage/RuntimeImageReader;", nullptr, $PUBLIC | $STATIC, $staticMethod(RuntimeImageReader, open, RuntimeImageReader*), "java.io.IOException"},
	{"requireOpen", "()V", nullptr, $PRIVATE, $method(RuntimeImageReader, requireOpen, void)},
	{"visitLocation", "(Ljdk/internal/jimage/RuntimeImageLocation;Ljdk/internal/jimage/RuntimeImageReader$LocationVisitor;)V", nullptr, 0, $method(RuntimeImageReader, visitLocation, void, $RuntimeImageLocation*, $RuntimeImageReader$LocationVisitor*)},
	{"visitPackageLocation", "(Ljdk/internal/jimage/RuntimeImageLocation;)V", nullptr, 0, $method(RuntimeImageReader, visitPackageLocation, void, $RuntimeImageLocation*)},
	{}
};

#define _METHOD_INDEX_findLocation0$7 7
#define _METHOD_INDEX_findLocation0$8 8
#define _METHOD_INDEX_getResource0 15

$InnerClassInfo _RuntimeImageReader_InnerClassesInfo_[] = {
	{"jdk.internal.jimage.RuntimeImageReader$Resource", "jdk.internal.jimage.RuntimeImageReader", "Resource", $STATIC},
	{"jdk.internal.jimage.RuntimeImageReader$LocationVisitor", "jdk.internal.jimage.RuntimeImageReader", "LocationVisitor", $STATIC | $INTERFACE | $ABSTRACT},
	{}
};

$ClassInfo _RuntimeImageReader_ClassInfo_ = {
	$PUBLIC | $FINAL | $ACC_SUPER,
	"jdk.internal.jimage.RuntimeImageReader",
	"java.lang.Object",
	"java.lang.AutoCloseable",
	_RuntimeImageReader_FieldInfo_,
	_RuntimeImageReader_MethodInfo_,
	nullptr,
	nullptr,
	_RuntimeImageReader_InnerClassesInfo_,
	nullptr,
	nullptr,
	"jdk.internal.jimage.RuntimeImageReader$Resource,jdk.internal.jimage.RuntimeImageReader$LocationVisitor"
};

$Object* allocate$RuntimeImageReader($Class* clazz) {
	return $of($alloc(RuntimeImageReader));
}

bool RuntimeImageReader::$assertionsDisabled = false;

void RuntimeImageReader::init$() {
	$set(this, nodes, $new($HashMap));
}

RuntimeImageReader* RuntimeImageReader::open() {
	$init(RuntimeImageReader);
	$var(RuntimeImageReader, image, $new(RuntimeImageReader));
	return image;
}

void RuntimeImageReader::close() {
	if (this->closed) {
		$throwNew($IOException, "image file already closed"_s);
	}
	this->closed = true;
}

void RuntimeImageReader::ensureOpen() {
	if (this->closed) {
		$throwNew($IOException, "image file closed"_s);
	}
}

void RuntimeImageReader::requireOpen() {
	if (this->closed) {
		$throwNew($IllegalStateException, "image file closed"_s);
	}
}

$ImageReader$Directory* RuntimeImageReader::getRootDirectory() {
	ensureOpen();
	return buildRootDirectory();
}

$ImageReader$Node* RuntimeImageReader::findNode($String* name) {
	ensureOpen();
	return findNode0(name);
}

$bytes* RuntimeImageReader::getResource($ImageReader$Node* node) {
	$useLocalCurrentObjectStackCache();
	ensureOpen();
	if ($instanceOf($RuntimeImageReader$Resource, node)) {
		$var($RuntimeImageReader$Resource, rs, $cast($RuntimeImageReader$Resource, node));
		return getResource0(rs);
	}
	$throwNew($IOException, $$str({"Not a resource: "_s, node}));
}

$bytes* RuntimeImageReader::getResource($RuntimeImageReader$Resource* rs) {
	ensureOpen();
	return getResource0(rs);
}

$RuntimeImageLocation* RuntimeImageReader::findLocation($String* mn, $String* rn) {
	requireOpen();
	return findLocation0(mn, rn);
}

$RuntimeImageLocation* RuntimeImageReader::findLocation($String* name) {
	requireOpen();
	return findLocation0(name);
}

$StringArray* RuntimeImageReader::getModuleNames() {
	$useLocalCurrentObjectStackCache();
	requireOpen();
	int32_t off = "/modules/"_s->length();
	return $fcast($StringArray, $nc($($nc($($nc($($nc($($nc($(findNode0("/modules"_s)))->getChildren()))->stream()))->map(static_cast<$Function*>($$new(RuntimeImageReader$$Lambda$getNameString)))))->map(static_cast<$Function*>($$new(RuntimeImageReader$$Lambda$lambda$getModuleNames$0$1, off)))))->toArray(static_cast<$IntFunction*>($$new(RuntimeImageReader$$Lambda$lambda$getModuleNames$1$2))));
}

$RuntimeImageLocation* RuntimeImageReader::findLocation0($String* mn, $String* rn) {
	$var($RuntimeImageLocation, $ret, nullptr);
	$prepareNative0(_METHOD_INDEX_findLocation0$7, RuntimeImageReader, findLocation0, $RuntimeImageLocation*, $String* mn, $String* rn);
	$assign($ret, $invokeNativeObject(mn, rn));
	$finishNative();
	return $ret;
}

$RuntimeImageLocation* RuntimeImageReader::findLocation0($String* name) {
	return Machine::findLocation(name);
}

$ImageReader$Node* RuntimeImageReader::buildNode($String* name) {
	$synchronized(this) {
		$useLocalCurrentObjectStackCache();
		$var($ImageReader$Node, n, nullptr);
		bool isPackages = $nc(name)->startsWith("/packages"_s);
		bool isModules = !isPackages && name->startsWith("/modules"_s);
		if (!(isModules || isPackages)) {
			return nullptr;
		}
		$var($RuntimeImageLocation, loc, findLocation(name));
		if (loc != nullptr) {
			if (isPackages) {
				$assign(n, handlePackages(name, loc));
			} else {
				$assign(n, handleModulesSubTree(name, loc));
			}
		} else if (isModules) {
			$assign(n, handleResource(name));
		} else {
			$assign(n, handleModuleLink(name));
		}
		return n;
	}
}

$ImageReader$Directory* RuntimeImageReader::buildRootDirectory() {
	$synchronized(this) {
		$var($ImageReader$Directory, root, this->rootDir);
		if (root != nullptr) {
			return root;
		}
		$assign(root, newDirectory(nullptr, "/"_s));
		$nc(root)->setIsRootDir();
		$set(this, packagesDir, newDirectory(root, "/packages"_s));
		$nc(this->packagesDir)->setIsPackagesDir();
		$set(this, modulesDir, newDirectory(root, "/modules"_s));
		$nc(this->modulesDir)->setIsModulesDir();
		root->setCompleted(true);
		return $set(this, rootDir, root);
	}
}

void RuntimeImageReader::visitLocation($RuntimeImageLocation* loc, $RuntimeImageReader$LocationVisitor* visitor) {
	$useLocalCurrentObjectStackCache();
	if ($nc(loc)->children != nullptr) {
		for (int32_t i = 0; i < $nc(loc->children)->length; ++i) {
			$var($RuntimeImageLocation, pkgLoc, findLocation0($nc(loc->children)->get(i)));
			$nc(visitor)->visit(pkgLoc);
		}
	}
}

void RuntimeImageReader::visitPackageLocation($RuntimeImageLocation* loc) {
	$useLocalCurrentObjectStackCache();
	$var($String, pkgName, getBaseExt(loc));
	if ($nc(loc)->children != nullptr) {
		for (int32_t i = 0; i < $nc(loc->children)->length; ++i) {
			$var($String, moduleName, $nc(loc->children)->get(i));
			$var($ImageReader$Node, targetNode, findNode0($$str({"/modules/"_s, moduleName})));
			if (targetNode != nullptr) {
				$var($String, pkgDirName, $str({$($nc(this->packagesDir)->getName()), "/"_s, pkgName}));
				$var($ImageReader$Directory, pkgDir, $cast($ImageReader$Directory, $nc(this->nodes)->get(pkgDirName)));
				newLinkNode(pkgDir, $$str({$($nc(pkgDir)->getName()), "/"_s, moduleName}), targetNode);
			}
		}
	}
}

$ImageReader$Node* RuntimeImageReader::handlePackages($String* name, $RuntimeImageLocation* loc) {
	$useLocalCurrentObjectStackCache();
	$var($ImageReader$Node, n, nullptr);
	if ($nc(name)->equals("/packages"_s)) {
		visitLocation(loc, static_cast<$RuntimeImageReader$LocationVisitor*>($$new(RuntimeImageReader$$Lambda$lambda$handlePackages$2$3, this)));
		$nc(this->packagesDir)->setCompleted(true);
		$assign(n, this->packagesDir);
	} else if ($nc(loc)->children != nullptr && $nc(loc->children)->length != 0) {
		$var($String, pkgName, getBaseExt(loc));
		$var($ImageReader$Directory, pkgDir, newDirectory(this->packagesDir, $$str({$($nc(this->packagesDir)->getName()), "/"_s, pkgName})));
		visitPackageLocation(loc);
		$nc(pkgDir)->setCompleted(true);
		$assign(n, pkgDir);
	} else {
		$var($String, pkgName, loc->getParent());
		$var($String, modName, getBaseExt(loc));
		$var($ImageReader$Node, targetNode, findNode0($$str({"/modules/"_s, modName})));
		if (targetNode != nullptr) {
			$var($String, pkgDirName, $str({$($nc(this->packagesDir)->getName()), "/"_s, pkgName}));
			$var($ImageReader$Directory, pkgDir, $cast($ImageReader$Directory, $nc(this->nodes)->get(pkgDirName)));
			$var($ImageReader$Node, linkNode, newLinkNode(pkgDir, $$str({$($nc(pkgDir)->getName()), "/"_s, modName}), targetNode));
			$assign(n, linkNode);
		}
	}
	return n;
}

$ImageReader$Node* RuntimeImageReader::handleModuleLink($String* name) {
	$useLocalCurrentObjectStackCache();
	$var($ImageReader$Node, ret, nullptr);
	$var($String, radical, "/packages/"_s);
	$var($String, path, name);
	if ($nc(path)->startsWith(radical)) {
		int32_t start = radical->length();
		int32_t pkgEnd = path->indexOf((int32_t)u'/', start);
		if (pkgEnd != -1) {
			$var($String, pkg, path->substring(start, pkgEnd));
			$var($String, pkgPath, $str({radical, pkg}));
			$var($ImageReader$Node, n, findNode0(pkgPath));
			{
				$var($Iterator, i$, $nc($($nc(n)->getChildren()))->iterator());
				for (; $nc(i$)->hasNext();) {
					$var($ImageReader$Node, child, $cast($ImageReader$Node, i$->next()));
					{
						if ($nc($($nc(child)->getName()))->equals(name)) {
							$assign(ret, child);
							break;
						}
					}
				}
			}
		}
	}
	return ret;
}

$ImageReader$Node* RuntimeImageReader::handleModulesSubTree($String* name, $RuntimeImageLocation* loc) {
	$useLocalCurrentObjectStackCache();
	$var($ImageReader$Node, n, nullptr);
	if (!RuntimeImageReader::$assertionsDisabled && !($nc(name)->equals($($nc(loc)->getFullName())))) {
		$throwNew($AssertionError);
	}
	$var($ImageReader$Directory, dir, makeDirectories(name));
	visitLocation(loc, static_cast<$RuntimeImageReader$LocationVisitor*>($$new(RuntimeImageReader$$Lambda$lambda$handleModulesSubTree$3$4, this, dir)));
	$nc(dir)->setCompleted(true);
	$assign(n, dir);
	return n;
}

$ImageReader$Node* RuntimeImageReader::handleResource($String* name) {
	$useLocalCurrentObjectStackCache();
	$var($ImageReader$Node, n, nullptr);
	if (!$nc(name)->startsWith("/modules/"_s)) {
		return nullptr;
	}
	int32_t moduleEndIndex = $nc(name)->indexOf((int32_t)u'/', "/modules/"_s->length());
	if (moduleEndIndex == -1) {
		return nullptr;
	}
	$var($RuntimeImageLocation, moduleLoc, findLocation($(name->substring(0, moduleEndIndex))));
	if (moduleLoc == nullptr || $nc(moduleLoc)->getModuleOffset() == 0) {
		return nullptr;
	}
	$var($String, locationPath, name->substring("/modules"_s->length()));
	$var($RuntimeImageLocation, resourceLoc, findLocation(locationPath));
	if (resourceLoc != nullptr) {
		$var($ImageReader$Directory, dir, makeDirectories($(resourceLoc->buildName(true, true, false))));
		$var($RuntimeImageReader$Resource, res, newResource(dir, resourceLoc));
		$assign(n, res);
	}
	return n;
}

$String* RuntimeImageReader::getBaseExt($RuntimeImageLocation* loc) {
	$useLocalCurrentObjectStackCache();
	$var($String, base, $nc(loc)->getBase());
	$var($String, ext, loc->getExtension());
	if (ext != nullptr && !ext->isEmpty()) {
		$assign(base, $str({base, "."_s, ext}));
	}
	return base;
}

$ImageReader$Node* RuntimeImageReader::findNode0($String* name) {
	$synchronized(this) {
		buildRootDirectory();
		$var($ImageReader$Node, n, $cast($ImageReader$Node, $nc(this->nodes)->get(name)));
		if (n == nullptr || !$nc(n)->isCompleted()) {
			$assign(n, buildNode(name));
		}
		return n;
	}
}

$BasicFileAttributes* RuntimeImageReader::imageFileAttributes() {
	$var($BasicFileAttributes, attrs, this->imageFileAttributes$);
	if (attrs == nullptr) {
		$assign(attrs, $new($RuntimeFileAttributes));
		$set(this, imageFileAttributes$, attrs);
	}
	return attrs;
}

$ImageReader$Directory* RuntimeImageReader::newDirectory($ImageReader$Directory* parent, $String* name) {
	$useLocalCurrentObjectStackCache();
	$var($ImageReader$Directory, dir, $ImageReader$Directory::create(parent, name, $(imageFileAttributes())));
	$nc(this->nodes)->put($($nc(dir)->getName()), dir);
	return dir;
}

$RuntimeImageReader$Resource* RuntimeImageReader::newResource($ImageReader$Directory* parent, $RuntimeImageLocation* loc) {
	$useLocalCurrentObjectStackCache();
	$var($RuntimeImageReader$Resource, res, $RuntimeImageReader$Resource::create(parent, loc, $(imageFileAttributes())));
	$nc(this->nodes)->put($($nc(res)->getName()), res);
	return res;
}

$ImageReader$LinkNode* RuntimeImageReader::newLinkNode($ImageReader$Directory* dir, $String* name, $ImageReader$Node* link) {
	$useLocalCurrentObjectStackCache();
	$var($ImageReader$LinkNode, linkNode, $ImageReader$LinkNode::create(dir, name, link));
	$nc(this->nodes)->put($($nc(linkNode)->getName()), linkNode);
	return linkNode;
}

$ImageReader$Directory* RuntimeImageReader::makeDirectories($String* parent) {
	$useLocalCurrentObjectStackCache();
	$var($ImageReader$Directory, last, this->rootDir);
	for (int32_t offset = $nc(parent)->indexOf((int32_t)u'/', 1); offset != -1; offset = parent->indexOf((int32_t)u'/', offset + 1)) {
		$var($String, dir, parent->substring(0, offset));
		$assign(last, makeDirectory(dir, last));
	}
	return makeDirectory(parent, last);
}

$ImageReader$Directory* RuntimeImageReader::makeDirectory($String* dir, $ImageReader$Directory* last) {
	$var($ImageReader$Directory, nextDir, $cast($ImageReader$Directory, $nc(this->nodes)->get(dir)));
	if (nextDir == nullptr) {
		$assign(nextDir, newDirectory(last, dir));
	}
	return nextDir;
}

$bytes* RuntimeImageReader::getResource0($RuntimeImageReader$Resource* resource) {
	return Machine::getResource0(resource->loc);
}

void RuntimeImageReader::lambda$handleModulesSubTree$3($ImageReader$Directory* dir, $RuntimeImageLocation* childloc) {
	$useLocalCurrentObjectStackCache();
	$var($String, path, $nc(childloc)->getFullName());
	if ($nc(path)->startsWith("/modules"_s)) {
		makeDirectories(path);
	} else {
		makeDirectories($(childloc->buildName(true, true, false)));
		newResource(dir, childloc);
	}
}

void RuntimeImageReader::lambda$handlePackages$2($RuntimeImageLocation* childloc) {
	findNode0($($nc(childloc)->getFullName()));
}

$StringArray* RuntimeImageReader::lambda$getModuleNames$1(int32_t x$0) {
	$init(RuntimeImageReader);
	return $new($StringArray, x$0);
}

$String* RuntimeImageReader::lambda$getModuleNames$0(int32_t off, $String* s) {
	$init(RuntimeImageReader);
	return $nc(s)->substring(off, s->length());
}

void clinit$RuntimeImageReader($Class* class$) {
	RuntimeImageReader::$assertionsDisabled = !RuntimeImageReader::class$->desiredAssertionStatus();
}

RuntimeImageReader::RuntimeImageReader() {
}

$Class* RuntimeImageReader::load$($String* name, bool initialize) {
	if (name != nullptr) {
		if (name->equals(RuntimeImageReader$$Lambda$getNameString::classInfo$.name)) {
			return RuntimeImageReader$$Lambda$getNameString::load$(name, initialize);
		}
		if (name->equals(RuntimeImageReader$$Lambda$lambda$getModuleNames$0$1::classInfo$.name)) {
			return RuntimeImageReader$$Lambda$lambda$getModuleNames$0$1::load$(name, initialize);
		}
		if (name->equals(RuntimeImageReader$$Lambda$lambda$getModuleNames$1$2::classInfo$.name)) {
			return RuntimeImageReader$$Lambda$lambda$getModuleNames$1$2::load$(name, initialize);
		}
		if (name->equals(RuntimeImageReader$$Lambda$lambda$handlePackages$2$3::classInfo$.name)) {
			return RuntimeImageReader$$Lambda$lambda$handlePackages$2$3::load$(name, initialize);
		}
		if (name->equals(RuntimeImageReader$$Lambda$lambda$handleModulesSubTree$3$4::classInfo$.name)) {
			return RuntimeImageReader$$Lambda$lambda$handleModulesSubTree$3$4::load$(name, initialize);
		}
	}
	$loadClass(RuntimeImageReader, name, initialize, &_RuntimeImageReader_ClassInfo_, clinit$RuntimeImageReader, allocate$RuntimeImageReader);
	return class$;
}

$Class* RuntimeImageReader::class$ = nullptr;

		} // jimage
	} // internal
} // jdk