//
// Created by carlostojal on 28/04/2023.
//

#ifndef DELAUNAY_PATH_PLANNER_CORE_ASTARHEURISTIC_H
#define DELAUNAY_PATH_PLANNER_CORE_ASTARHEURISTIC_H

#include "Heuristic.h"

namespace path_planner::search::heuristics {

    class AStarHeuristic : Heuristic {
        public:
            double compute(const std::shared_ptr<lart_common::State>& state1,
                           const std::shared_ptr<lart_common::State>& state2,
                           const std::shared_ptr<lart_common::State>& goalState, double currentGCost) override;
    };

} // path_planner

#endif //DELAUNAY_PATH_PLANNER_CORE_ASTARHEURISTIC_H
