//
//  ProfileView.swift
//  InstagramTutorial
//
//  Created by Erasyl on 11.11.2023.
//

import SwiftUI

struct ProfileView: View {
    
    private let gridItems: [GridItem] = [
        .init(.flexible(), spacing: 1),
        .init(.flexible(), spacing: 1),
        .init(.flexible(), spacing: 1),
    ]
    
    
    var body: some View {
        NavigationStack {
            ScrollView {
                // header
                VStack(spacing: 10) {
                    // pic and stats
                    HStack {
                        Image("Avatar")
                            .resizable()
                            .scaledToFill()
                            .frame(width: 80, height: 80)
                            .clipShape(Circle())
                        Spacer()
                        HStack(spacing: 8) {
                            UserStatView(value: 3, title: "Posts");
                            
                            UserStatView(value: 627, title: "Followers")
                            
                            UserStatView(value: 436, title: "Following ")
                            
                        }
                    }
                    .padding(.horizontal)
                    
                    // name and bio
                    VStack(alignment: .leading, spacing: 4 ) {
                        Text("Yerassyl Saiman")
                            .font(.footnote)
                            .fontWeight(.semibold)
                        
                        Text("iosDev from Africa")
                            .font(.footnote)
                    }
                    .frame(maxWidth: .infinity, alignment: .leading)
                    .padding(.horizontal)
                    
                    // action button
                    
                    Button {
                        
                    } label: {
                        Text("Edit profile")
                            .font(.subheadline)
                            .fontWeight(.semibold)
                            .frame(width: 175 , height: 28)
                            .foregroundColor(.black)
                            .overlay(
                                RoundedRectangle(cornerRadius: 6)
                                    .stroke(Color.gray, lineWidth: 1))
                        Text("Share profile")
                            .font(.subheadline)
                            .fontWeight(.semibold)
                            .frame(width: 175, height: 28)
                            .foregroundColor(.black)
                            .overlay(
                                RoundedRectangle(cornerRadius: 6)
                                    .stroke(Color.gray, lineWidth: 1))
                    }
                    
                    Divider()
                }
                
                // post grid view
                
                LazyVGrid(columns: gridItems, spacing: 1) {
                    ForEach(0 ... 0, id: \.self) { index in
                        
                        Image("Image2")
                            .resizable()
                            .scaledToFit()
                        //                Image("Image1")
                        //                    .resizable()
                        //                    .scaledToFit()
                        Image("Image3")
                            .resizable()
                            .scaledToFit()
                    }
                }
            }
//            .navigationTitle("yerass1ll")
//            .navigationBarTitleDisplayMode(.inline)
            .navigationBarTitle("", displayMode: .inline) // Clear the default title
            .navigationBarItems(leading: HStack (spacing: 1) {
                            Text("yerass1ll")
                                .fontWeight(.bold)
                        
                        })
            .toolbar {
                ToolbarItem(placement: .navigationBarTrailing) {
                    Button {
                    
                    } label: {
                        Image(systemName: "line.3.horizontal")
                    }
                    
                    .foregroundColor(.black)
                }
            }
            .toolbar {
                ToolbarItem(placement: .navigationBarTrailing) {
                    Button {
                        
                    } label: {
                        Image(systemName: "plus.square")
                    }
                    .foregroundColor(.black)
                }
            }
        }
    }
}

#Preview {
    ProfileView()
}
