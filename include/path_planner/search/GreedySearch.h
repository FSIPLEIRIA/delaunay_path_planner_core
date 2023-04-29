//
// Created by carlostojal on 28/04/2023.
//

#ifndef DELAUNAY_PATH_PLANNER_CORE_GREEDYSEARCH_H
#define DELAUNAY_PATH_PLANNER_CORE_GREEDYSEARCH_H

#include "InformedSearchAlgorithm.h"
#include "path_planner/search/heuristics/GreedyHeuristic.h"

namespace path_planner::search {

    class GreedySearch : InformedSearchAlgorithm<path_planner::search::heuristics::GreedyHeuristic> {

        public:
            std::list<std::shared_ptr<path_planner::State>> search() override;
    };

} // path_planner

#endif //DELAUNAY_PATH_PLANNER_CORE_GREEDYSEARCH_H