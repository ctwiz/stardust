#!/usr/bin/env python3
# Copyright (c) 2016 The Stardust Core developers
# Distributed under the MIT software license, see the accompanying
# file COPYING or http://www.opensource.org/licenses/mit-license.php.

#
# Helper script to create the cache
# (see StardustTestFramework.setup_chain)
#

from test_framework.test_framework import StardustTestFramework

class CreateCache(StardustTestFramework):

    def setup_network(self):
        # Don't setup any test nodes
        self.options.noshutdown = True

    def run_test(self):
        pass

if __name__ == '__main__':
    CreateCache().main()
