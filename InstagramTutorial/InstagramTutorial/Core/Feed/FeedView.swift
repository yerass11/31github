//
//  FeedView.swift
//  InstagramTutorial
//
//  Created by Erasyl on 11.11.2023.
//

import SwiftUI

struct FeedView: View {
    var body: some View {
        NavigationStack {
            ScrollView {
                LazyVStack(spacing: 32 ) {
                    ForEach(0 ... 10, id: \.self) { post in
                        FeedCell()
                    }
                }
                .padding(.top, 8)
            }
            .toolbar {
                ToolbarItem(placement: .navigationBarLeading) {
                    Image("Instagram_logo_black")
                        .resizable()
                        .frame(width: /*@START_MENU_TOKEN@*/100/*@END_MENU_TOKEN@*/, height: 60)
                }
            }
//            .toolbar {
//                ToolbarItem(placement: .navigationBarTrailing) {
//                    Image("message")
//                        .resizable()
//                        .frame(width: 40, height: 35)
//                }
//            }
//            .toolbar {
//                ToolbarItem(placement: .navigationBarTrailing) {
//                    Image(systemName: "heart")
//                        .foregroundColor(.black)
//                }
//            }
            .toolbar {
                ToolbarItem(placement: .navigationBarTrailing) {
                    HStack(spacing: 8) {
                        Image(systemName: "heart")
                            .foregroundColor(.black)
                        
                        Image("message")
                            .resizable()
                            .frame(width: 20, height: 23)
                    }
                }
            }

        }
    }
}

#Preview {
    FeedView()
}
