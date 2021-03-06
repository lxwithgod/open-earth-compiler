#ifndef DIALECT_STENCIL_PASSES_H
#define DIALECT_STENCIL_PASSES_H


#include "mlir/Pass/Pass.h"
#include "mlir/IR/Function.h"
#include <memory>

namespace mlir {

std::unique_ptr<OperationPass<FuncOp>> createStencilInliningPass();

std::unique_ptr<OperationPass<FuncOp>> createStencilUnrollingPass();

std::unique_ptr<OperationPass<FuncOp>> createShapeInferencePass();

} // namespace mlir

#endif // DIALECT_STENCIL_PASSES_H
