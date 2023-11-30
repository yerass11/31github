//
//  SearchView.swift
//  InstagramTutorial
//
//  Created by Erasyl on 17.11.2023.
//

import SwiftUI

struct SearchView: View {
    @State private var searchText = ""
    
    var body: some View {
        NavigationStack {
            ScrollView {
                LazyVStack(spacing: 12) {
                    ForEach(0 ... 15, id: \.self) { user in
                        HStack {
                            Image("Viking")
                                .resizable()
                                .scaledToFill()
                                .frame(width: 40, height: 40)
                                .clipShape(Circle())
                        
                            VStack(alignment: .leading) {
                                Text("vikings")
                                    .fontWeight(.semibold)
                                
                                Text("on an on")
                            }
                            .font(.footnote)
                            
                            Spacer()
                        }
                        .padding(.horizontal)
                    }
                }
//                .padding(.top)
                .searchable(text: $searchText, prompt: "Search")
            }
        }
    }
}

#Preview {
    SearchView()
}
